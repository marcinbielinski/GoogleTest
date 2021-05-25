#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassName.h"
#include <iostream>
#include <memory>

using testing::Eq;
namespace {
    class ClassDeclaration : public testing::Test {
    protected:
        // ClassName* pClassname_;
        std::unique_ptr<ClassName> pClassname_;
        ClassName obj{};
        ClassDeclaration() { std::cout << "Konstruktor Fixtury" << std::endl; };
        ~ClassDeclaration() override { std::cout << "Destruktor Fixtury" << std::endl; };
        void SetUp() override {
            std::cout << "Oh it's a setup it's a setup it's a setup" << std::endl;
            pClassname_ = std::make_unique<ClassName>();
        }

    };
}
TEST_F(ClassDeclaration, CanDoTest1){
    obj.setAge(22);
    std::cout << "Konstruktor TEST 1" << std::endl;
    ASSERT_EQ(22, obj.getAge());
    ASSERT_EQ("","");
}

TEST_F(ClassDeclaration, CanDoTest2) {
    obj.setAge(58);
    std::cout << "Konstruktor TEST 2" << std::endl;
    ASSERT_THAT(58, testing::Eq(obj.getAge()));
    ASSERT_EQ("", "");
}