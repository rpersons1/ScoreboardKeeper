#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int main()
{
  int periods;
  int teams;
  //vector <vector <int> > score;

  cout<<"How many competitors? ";
  cin>>teams;
  cout<<"How many scoring periods? ";
  cin>>periods;

  if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
      teams > MAX_TEAMS || periods > MAX_PERIODS )
  {
    cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
    return 0;
  }
  else
  {
  vector <vector <int> > score(teams);
  cout<<"SCOREBOARD\n";
  for( int tm = 0; tm < teams; tm++ )
  {
     score[tm].resize( periods );
     cout<<"Player "<<tm + 1<<": ";
     for( int per = 0; per < periods; per++ )
    {
   // cout<<"1 ";
//      cout<<"r-"<<row<<" "<<"c-"<<col<<"|";
      score[tm][per] = 0;
      cout<<score[tm][per]<<"|";
    }
    cout<<endl;
  }

  //make scoreboard and fill it with zeros
  
  //once created, display the scoreboard
  }

  return 0;

}
