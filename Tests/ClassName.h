#pragma once

class ClassName {
public:
    int age;

    [[nodiscard]] int getAge() const {
        return age;
    }

    void setAge(int atAge) {
        ClassName::age = atAge;
    }

};
