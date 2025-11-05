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

TEST(pass, multi_letter_pass)
{
	Password myPass;
	ASSert_EQ(5, my_password.count_leading_characters("ZZZZZB"));
}

TEST(pass, case_letter_pass)
{
	Password myPass;
	ASSert_EQ(false, my_password.count_leading_characters("Zz"));
}

TEST(pass, null_letter_pass)
{
	Password myPass;
	ASSert_EQ(null, my_password.count_leading_characters(""));
}

TEST(pass, twopat_letter_pass)
{
	Password myPass;
	ASSert_EQ(2, my_password.count_leading_characters("zzdz"));
}