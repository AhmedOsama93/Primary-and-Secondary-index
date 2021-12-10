#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
/* ceil */
#include <sstream>
using namespace std;
void addEmploy()
{
    string id;
    string  Did;
    string employeeName;
    string employeePosition;
    do{
        cout<<"enter id"<<endl;
        cin>>id;
    }
    while(id.length()>13);
    //check if the id is unique

    do{
        cout<<"enter department id"<<endl;
        cin>>Did;
    }
    while(Did.length()>30);
    //check if Did exests
    do{
        cout<<"enter employee Name"<<endl;
        cin>>employeeName;
    }
    while(employeeName.length()>50);

    do{
        cout<<"enter employeePosition"<<endl;
        cin>>employeePosition;
    }
    while(employeePosition.length()>50);


    int recordLenth = 3 + id.length() + Did.length() + employeeName.length() + employeePosition.length();

    ofstream Employees;
    Employees.open("Employees.txt" ,ios::out|ios::app);
    Employees.seekp(0,ios::end);
    int fileSizeBeforInsert = Employees.tellp();
    string fileSizeBeforInsertS=to_string(fileSizeBeforInsert);
    while(fileSizeBeforInsertS.length()<4)
    {
        string zero="0";
        fileSizeBeforInsertS=zero.append(fileSizeBeforInsertS);
    }
    Employees<<"#";
    if(recordLenth<10)
    {
        Employees<<"00";
    }
    else if(recordLenth<100)
    {
        Employees<<"0";
    }
    Employees<<recordLenth;
    Employees<<id<<"&";
    Employees<<Did<<"&";
    Employees<<employeeName<<"&";
    Employees<<employeePosition;
    Employees.close();


    fstream EmployeesPrimaryIndex;
    EmployeesPrimaryIndex.open("EmployeesPrimaryIndex.txt" ,ios::out|ios::in);
    char x [17] ;
    int index =0;
    while(!EmployeesPrimaryIndex.eof())
    {

        for(int i=0;i<17;i++)
        {
            EmployeesPrimaryIndex>>x[i];
        }
        string sx (x);
        if(id<sx||sx=="")
        {
            break;
        }

        index+=17;
    }

    while(id.length()<13)
    {
        id.append("@");
    }
    string temp1 = id.append(fileSizeBeforInsertS);

    EmployeesPrimaryIndex.seekp(0,ios::end);
    int PIndexSize = EmployeesPrimaryIndex.tellp();
    EmployeesPrimaryIndex.seekp(index);
    while(true)
    {//for shifting

        if(PIndexSize==EmployeesPrimaryIndex.tellp())
        {
            ofstream z;
            z.open("EmployeesPrimaryIndex.txt" ,ios::out|ios::app);
            z.seekp(0,ios::end);
            z<<temp1;
            break;
        }
        for(int i=0;i<17;i++)
        {
            EmployeesPrimaryIndex>>x[i];
        }

        string temp2(x);
        EmployeesPrimaryIndex.seekg(index);
        EmployeesPrimaryIndex<<temp1;
        temp1=temp2;
        index+=17;
    }
    EmployeesPrimaryIndex.close();

    fstream EmployeesSecondaryIndex;
    EmployeesSecondaryIndex.open("EmployeesPrimaryIndex.txt" ,ios::out|ios::in);
    fstream EmployeesSecondaryIndexHeader;
    EmployeesSecondaryIndexHeader.open("EmployeesSecondaryIndexHeader.txt" ,ios::out|ios::in);

    char y [30];
    string did30 = Did;
    while(did30.length()<30)
    {
        did30.append("@");
    }
    bool found = false;

    EmployeesSecondaryIndexHeader.seekp(0,ios::end);
    int SHeaderIndexSize = EmployeesSecondaryIndexHeader.tellg();

    string SHeaderIndexSizeS=to_string(SHeaderIndexSize);
    while(SHeaderIndexSizeS.length()<4)
    {
        string zero="0";
        SHeaderIndexSizeS=zero.append(SHeaderIndexSizeS);
    }

    EmployeesSecondaryIndexHeader.seekp(0,ios::beg);

    while(!EmployeesSecondaryIndexHeader.eof())
    {

        for(int i=0;i<30;i++)
        {
            EmployeesSecondaryIndexHeader>>y[i];
        }
        string sy (y);
        if(did30 ==sy)
        {
            found=true;
            break;
        }
        int zz = EmployeesSecondaryIndexHeader.tellg();
        if (SHeaderIndexSize ==  zz + 4) {
            break;
        } else {
            if (SHeaderIndexSize == 0) {
                break;
            }
        }
        EmployeesSecondaryIndexHeader.seekg(4,ios::cur);
    }
    ofstream writeToSIndex;
    writeToSIndex.open("EmployeesSecondaryIndex.txt" ,ios::out|ios::app);
    writeToSIndex.seekp(0,ios::end);
    int SIndexSize = writeToSIndex.tellp();
    string SIndexSizeS = to_string(SIndexSize);
    while(SIndexSizeS.length()<4)
    {
        string zero="0";
        SIndexSizeS=zero.append(SIndexSizeS);
    }
    writeToSIndex<<fileSizeBeforInsertS<<"00-1";

    if(found==true)
    {
        char of[4];
        for(int i=0;i<4;i++)
        {
            EmployeesSecondaryIndexHeader>>of[i];
        }
        string s =(of);
        int offset =stoi(s);
        fstream writeLinkToSIndex;
        writeLinkToSIndex.open("EmployeesSecondaryIndex.txt" ,ios::out|ios::in);
        char of1[4];
        while(1)
        {
            string ss="";
            writeLinkToSIndex.seekg(offset+4,ios::beg);
            for(int i=0;i<4;i++)
            {
                writeLinkToSIndex>>of1[i];
                ss=ss+of1[i];
            }

            if(ss=="00-1")
            {
                writeLinkToSIndex.seekg(-4,ios::cur);
                cout<<SIndexSizeS<<endl;
                writeLinkToSIndex<<SIndexSizeS;
                break;
            }
            offset =stoi(ss);

        }
    }
    else
    {
        ofstream writeToHeader;
        writeToHeader.open("EmployeesSecondaryIndexHeader.txt" ,ios::out|ios::app);
        writeToHeader.seekp(0,ios::end);
        writeToHeader<<did30<<SIndexSizeS;
    }

}
int binarySearch(string empId){
    while(empId.length()<13)
    {
        empId.append("@");
    }
    double first=0, last;
    fstream EmployeesPrimaryIndex;
    EmployeesPrimaryIndex.open("EmployeesPrimaryIndex.txt" ,ios::out|ios::in);
    EmployeesPrimaryIndex.seekp(0,ios::end);
    int PIndexSize = EmployeesPrimaryIndex.tellp();
    int numRec = PIndexSize / 17;
    last = numRec;
    char mid[13];
    while (first <= last) {
        int midPos = ceil((last - first) / 2);
        EmployeesPrimaryIndex.seekp(midPos*17 );
        string com = "";
        // found emp;
        for (int i = 0; i < 13; ++i){
            EmployeesPrimaryIndex>>mid[i];
            com+=mid[i];
        }
        if (com == empId){
            cout<< midPos;
            break;
        }
        if (com < empId)
            last = midPos - 1;
        else
            first = midPos + 1;
    }
    return -1;
}


int main()
{
    binarySearch("1");
    return 0;
}
