#include "unity.h"
#include "acutest.h"
#include "functions.h"



void castVote();
void votesCount();
void getLeadingCandidate();

void setUp(){}

void tearDown(){}

int main()
{

  UNITY_BEGIN();

  RUN_TEST(castVote);
  RUN_TEST(votesCount);
  RUN_TEST(getLeadingCandidate);
  
TEST_ASSERT_EQUAL_INT( 1, void castVote(void) );
 TEST_ASSERT_EQUAL_INT( 2, void votesCount(void) ); 
 TEST_ASSERT_EQUAL_INT( 3, void getLeadingCandidate(void) );

  return UNITY_END();
}


void castVote(void) {
  int TEST_ASSERT_EQUAL(votesCount1++, 1);
  int TEST_ASSERT_EQUAL(votesCount2++, 2);
  int TEST_ASSERT_EQUAL(votesCount3++, 3);
  int TEST_ASSERT_EQUAL(votesCount4++, 4);
  int TEST_ASSERT_EQUAL();

  TEST_ASSERT_EQUAL(15000, add(7500, 7500));

}
  TEST_LIST = {
{"int add(int, int);", casteVote},
{0}
}; 

void votesCount(void) {
  TEST_ASSERT_EQUAL(3, add(0, 3));
  int TEST_ASSERT_EQUAL();
 
  TEST_ASSERT_EQUAL(100, add(1000, 900));
 
}
 TEST_LIST = {
{"int add(int, int);", votesCount},
{0}
}; 

void getLeadingCandidate(void) {
  TEST_ASSERT_EQUAL(1, max(1, 0));
  
  
  TEST_ASSERT_EQUAL(10, max(2, 5));
}
TEST_LIST = {
{"int max(int, int);", getLeadingCandidate},
{0}
}; 
