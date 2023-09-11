#pragma once
namespace global {
    extern int index;
}

class PhoneBook {
private:
    char* firstName;
    char* middleName;
    char* lastName;
    char* workPhone;
    char* mobilePhone;

public:
    PhoneBook();
    void AskInformation();
    void AddUser(PhoneBook* user, int amount);
    bool isCheckedPhone(char* checkPhone);
    void AddPersonToFile(const char* filename, PhoneBook* user);
    void ShowUserData(const char* filename, PhoneBook* user);
    PhoneBook* DeletePerson(PhoneBook* user);
    void GetUser(PhoneBook* user, int i);
    void FindUserByFullName(PhoneBook* user);
    ~PhoneBook();

};

