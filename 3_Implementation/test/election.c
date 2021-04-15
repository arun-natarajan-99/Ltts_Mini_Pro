#include "unity"


#define CANDIDATE_COUNT

#define CANDIDATE1 "David Hull"
#define CANDIDATE2 "Kristin Canella"
#define CANDIDATE3 "Jim Brar"
#define CANDIDATE4 "Donald Truimph"



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
  

  return UNITY_END();
}

void castVote(void) {
  TEST_ASSERT_EQUAL(1, if(1);
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void votesCount(void) {
  TEST_ASSERT_EQUAL(3, add(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, add(1000, 900));
}

void getLeadingCandidate(void) {
  TEST_ASSERT_EQUAL(0, max(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, max(2, 5));
}