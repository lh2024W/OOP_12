// OOP_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Passport {
protected:
    string number;//серия, номер паспорта
    string issue_date;//дата выдачи паспорта
    string name;// ФИО
    string birthday_date;// дата рождения
    string citizenship;//гражданство
    string registration_place;//место регистрации
    string registration_date;//дата регистрации

public:
    void SetNumberOfPassport(string number) {
        this->number = number;
    }

    void SetIssueDate(string issue_date) {
        this->issue_date = issue_date;
    }

    void SetName(string name) {
        this->name = name;
    }

    void SetBirthdayDate(string birthday_date) {
        this->birthday_date = birthday_date;
    }

    void SetСitizenship(string citizenship) {
        this->citizenship = citizenship;
    }

    void SetRegistrationPlace(string registration_place) {
        this->registration_place = registration_place;
    }
    
    void SetRegistrationDate(string registration_date) {
        this->registration_date = registration_date;
    }

    string GetNumberOfPassport() {
        return number;
    }

    string GetIssueDate() {
        return issue_date;
    }

    string GetName() {
        return name;
    }

    string GetBirthdayDate() {
        return birthday_date;
    }

    string GetСitizenship() {
        return citizenship;
    }
    
    string GetRegistrationPlace() {
        return registration_place;
    }
    
    string GetRegistrationDate() {
        return registration_date;
    }

    Passport(): Passport ("KK 023589", "12.03.22", "Ivanov Ivan Ivanovich", "16.11.93", "Ukraine", "Odessa st.Korolyova 54", "14.02.24") {}
    
    //main c-tor
    Passport(string number, string issue_date, string name, string birthday_date, string citizenship, string registration_place, string registration_date){
        SetNumberOfPassport(number);
        SetIssueDate(issue_date);
        SetName(name);
        SetBirthdayDate(birthday_date);
        SetСitizenship(citizenship);
        SetRegistrationPlace(registration_place);
        SetRegistrationDate(registration_date);
    }
    ~Passport() {}

    void Print() const {
        cout << number << "\n";
        cout << issue_date << "\n";
        cout << name << "\n";
        cout << birthday_date << "\n";
        cout << citizenship << "\n";
        cout << registration_place << "\n";
        cout << registration_date << "\n\n";
    }
};

class ForeignPassport: public Passport {
protected:
    string number;//серия, номер загранпаспорта
    string issue_date;// дата выдачи загранпаспорта

public:
    void SetNumberOfPassport(string number) {
        this->number = number;
    }

    void SetIssueDate(string issue_date) {
        this->issue_date = issue_date;
    }

    string GetNumberOfPassport() {
        return number;
    }

    string GetIssueDate() {
        return issue_date;
    }

    ForeignPassport() : ForeignPassport("GF 5968841", "11.05.23") {}

    //main c-tor
    ForeignPassport (string number, string issue_date) {
        SetNumberOfPassport(number);
        SetIssueDate(issue_date);
    }
    ~ForeignPassport() {}

    void Print() const {
        cout << "Foreign passport\n";
        cout << number << "\n";
        cout << issue_date << "\n";
        Passport::Print();
        cout << "\n";
    }
};

class Visa: public ForeignPassport {
protected:
    string number;//серия, номер визы
    string issue_date;// дата выдачи визы
    string enter_date;// срок годности визы
    string type_visa;// тип визы

public:
    void SetNumberOfPassport(string number) {
        this->number = number;
    }

    void SetIssueDate(string issue_date) {
        this->issue_date = issue_date;
    }

    void SetEnterDate(string enter_date) {
        this->enter_date = enter_date;
    }

    void SetTypeVisa(string type_visa) {
        this->type_visa = type_visa;
    }

    string GetNumberOfPassport() {
        return number;
    }

    string GetIssueDate() {
        return issue_date;
    }

    string GetEnterDate() {
        return enter_date;
    }
    
    Visa() : Visa("LL 89442225566", "15.03.24", "15.05.24", "family OC") {}

    //main c-tor
    Visa(string number, string issue_date, string enter_date, string type_visa) {
        SetNumberOfPassport(number);
        SetIssueDate(issue_date);
        SetEnterDate(enter_date);
        SetTypeVisa(type_visa);
    }
    ~Visa() {}

    void Print() const {
        cout << "Ukrain passport\n";
        Passport::Print();
        ForeignPassport::Print();
        cout << "Visa\n";
        cout << number << "\n";
        cout << issue_date << "\n";
        cout << enter_date << "\n";
        cout << type_visa << "\n\n";
    }
    
};

int main()
{
    Passport p;
    p.Print();
    cout << "\n\n";
    ForeignPassport f;
    f.Print();
    cout << "\n\n";
    Visa v;
    v.Print();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
