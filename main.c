#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "David Hull"
#define CANDIDATE2 "Kristin Canella"
#define CANDIDATE3 "Jim Brar"
#define CANDIDATE4 "Donald Truimph"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

int main()
{
int i;
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2021 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}
