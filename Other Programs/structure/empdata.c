#include <stdio.h>
#include <string.h>
#define numEmployees 2

struct Address {
    int houseNo;
    char street[100];
    char city[100];
    char state[100];
    char pinCode[20];
};

struct Employee {
    char name[100];
    char department[100];
    struct Address address;
    double salary;
};

int main() {
    struct Employee emp[numEmployees];

    // Enter details for each employee
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        fflush(stdin);
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

        printf("Department: ");
        fflush(stdin);
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        emp[i].department[strcspn(emp[i].department, "\n")] = '\0';

        printf("House No: ");
        scanf("%d", &emp[i].address.houseNo);

        printf("Street: ");
        fflush(stdin);
        fgets(emp[i].address.street, sizeof(emp[i].address.street), stdin);
        emp[i].address.street[strcspn(emp[i].address.street, "\n")] = '\0';

        printf("City: ");
        fflush(stdin);
        fgets(emp[i].address.city, sizeof(emp[i].address.city), stdin);
        emp[i].address.city[strcspn(emp[i].address.city, "\n")] = '\0';

        printf("State: ");
        fflush(stdin);
        fgets(emp[i].address.state, sizeof(emp[i].address.state), stdin);
        emp[i].address.state[strcspn(emp[i].address.state, "\n")] = '\0';

        printf("Pin Code: ");
        fflush(stdin);
        fgets(emp[i].address.pinCode, sizeof(emp[i].address.pinCode), stdin);
        emp[i].address.pinCode[strcspn(emp[i].address.pinCode, "\n")] = '\0';

        printf("Salary: ");
        scanf("%lf", &emp[i].salary);

        printf("\n");
    }
    int a=0;
    // Print details for employees with salary > 20000
    printf("Employees with salary more than 20000:\n");
    for (int i = 0; i < numEmployees; i++) {
        if (emp[i].salary > 20000) {
            printf("Name: %s\n", emp[i].name);
            printf("Address: %d, %s, %s, %s, %s\n", emp[i].address.houseNo, emp[i].address.street, emp[i].address.city, emp[i].address.state, emp[i].address.pinCode);
            printf("Salary: %.2lf\n\n", emp[i].salary);
        }
    }
        if(a==0){
            printf("There is No Employees having More Than 20000 Salary.");
        }

    return 0;
}
