/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}
TEST(PasswordTest, all_same)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaaaaaaaaa");
	ASSERT_EQ(10, actual);
}
TEST(PasswordTest, special_character)
{
	Password my_password;
	int actual = my_password.count_leading_characters(";;pplpsalkppat");
	ASSERT_EQ(2, actual);
}
TEST(PasswordTest, alternating_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("atatatatata");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, case_sensitive)
{
	Password my_password;
	int actual = my_password.count_leading_characters("BBBBbbbbbubbbbles");
	ASSERT_EQ(4, actual);
}
TEST(PasswordTest, null_input)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}
TEST(PasswordTest, two_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("pp");
	ASSERT_EQ(2, actual);
}
