
#include <iostream>
#include <string>

// Базовый класс "Человек"
class Person {
protected:
    std::string name;
    std::string surname;
    int age;

public:
    Person(const std::string& name, const std::string& surname, int age)
        : name(name), surname(surname), age(age) {
    }

    std::string getFullName() const {
        return name + " " + surname;
    }

    int getAge() const {
        return age;
    }
};

// Преподаватель - дочерний класс от Person
class Teacher : public Person {
private:
    std::string subject;

public:
    Teacher(const std::string& name, const std::string& surname, int age, const std::string& subject)
        : Person(name, surname, age), subject(subject) {
    }

    std::string getSubject() const {
        return subject;
    }
};

// Студент - дочерний класс от Person
class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string& name, const std::string& surname, int age, const std::string& major)
        : Person(name, surname, age), major(major) {
    }

    std::string getMajor() const {
        return major;
    }
};

// Аспирант - дочерний класс от Person
class GraduateStudent : public Person {
private:
    std::string researchTopic;

public:
    GraduateStudent(const std::string& name, const std::string& surname, int age, const std::string& researchTopic)
        : Person(name, surname, age), researchTopic(researchTopic) {
    }

    std::string getResearchTopic() const {
        return researchTopic;
    }
};

// Охраник - дочерний класс от Person
class SecurityGuard : public Person {
private:
    std::string shift;

public:
    SecurityGuard(const std::string& name, const std::string& surname, int age, const std::string& shift)
        : Person(name, surname, age), shift(shift) {
    }

    std::string getShift() const {
        return shift;
    }
};

int main() {
    setlocale(LC_ALL, "Ru");
    Teacher teacher("Иван", "Иванов", 35, "Математика");
    Student student("Петр", "Петров", 20, "Информатика");
    GraduateStudent graduateStudent("Анна", "Смирнова", 25, "Искусственный интеллект");
    SecurityGuard securityGuard("Сергей", "Сидоров", 40, "Ночная");

    std::cout << "Преподаватель: " << teacher.getFullName() << ", Предмет: " << teacher.getSubject() << std::endl;
    std::cout << "Студент: " << student.getFullName() << ", Специальность: " << student.getMajor() << std::endl;
    std::cout << "Аспирант: " << graduateStudent.getFullName() << ", Тема исследования: " << graduateStudent.getResearchTopic() << std::endl;
    std::cout << "Охранник: " << securityGuard.getFullName() << ", Смена: " << securityGuard.getShift() << std::endl;

    return 0;
}