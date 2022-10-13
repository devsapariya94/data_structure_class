#include <stdio.h>
#include <string.h>

struct organization{
    char orgName[20];
    int orgId;
    struct employee{
        char empName[20];
        int empId;
        int empSalary;

} employee[2];
};

int main(){
    struct organization org1;
    struct organization org2;
    strcpy(org1.orgName, "Google");
    org1.orgId=1;
    strcpy(org1.employee[0].empName, "Dev");
    org1.employee[0].empId=1;
    org1.employee[0].empSalary=9999999;
    strcpy(org1.employee[1].empName, "Rohit");
    org1.employee[1].empId=2;
    org1.employee[1].empSalary=20000;
    strcpy(org2.orgName, "Microsoft");
    org2.orgId=2;
    strcpy(org2.employee[0].empName, "Rahul");
    org2.employee[0].empId=3;
    org2.employee[0].empSalary=30000;
    strcpy(org2.employee[1].empName, "Sachin");
    org2.employee[1].empId=4;
    org2.employee[1].empSalary=40000;
    printf("Organization Name: %s\n", org1.orgName);
    printf("Organization Id: %d\n", org1.orgId);
    printf("Employee Name: %s\n", org1.employee[0].empName);
    printf("Employee Id: %d\n", org1.employee[0].empId);
    printf("Employee Salary: %d\n", org1.employee[0].empSalary);
    printf("Employee Name: %s\n", org1.employee[1].empName);
    printf("Employee Id: %d\n", org1.employee[1].empId);
    printf("Employee Salary: %d\n", org1.employee[1].empSalary);
    printf("Organization Name: %s\n", org2.orgName);
    printf("Organization Id: %d\n", org2.orgId);
    printf("Employee Name: %s\n", org2.employee[0].empName);
    printf("Employee Id: %d\n", org2.employee[0].empId);
    printf("Employee Salary: %d\n", org2.employee[0].empSalary);
    printf("Employee Name: %s\n", org2.employee[1].empName);
    printf("Employee Id: %d\n", org2.employee[1].empId);
    printf("Employee Salary: %d\n", org2.employee[1].empSalary);
    
    return 0;
}