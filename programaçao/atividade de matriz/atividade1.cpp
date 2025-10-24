#include <iostream>
#include <string>
using namespace std;

int main() {
  int l = 15;
  int c = 15;
  int m[l][c];
  
  for(int i = 0;i < l;i++){
	  for(int x = 0;x < c;x++){
		  cin >> m[i][x];
		  
		  
	  }
  }
	  
  
  int tl1,tc1,tl2,tc2,tl3,tc3;
  
  
  cin >> tl1 >> tc1 >> tl2 >> tc2 >> tl3 >> tc3;
  
  int mt1 = m[tl1][tc1];
  int mt2 = m[tl2][tc2];
  int mt3 = m[tl3][tc3];
  
  
  if(mt1 == 3){
	  cout << "lancha" << endl;
  }
  else if(mt1 == 2){
	  cout << "fragata" << endl;
  }
  else if(mt1 == 1){
	  cout << "destroier" << endl;  
  }
  else{
	  cout << "agua" << endl;
  }
  
  if(mt2 == 3){
	  cout << "lancha" << endl;
  }
  else if(mt2 == 2){
	  cout << "fragata" << endl;
  }
  else if(mt2 == 1){
	  cout << "destroier" << endl;  
  }
  else{
	  cout << "agua" << endl;
  }
  
  if(mt3 == 3){
	  cout << "lancha" << endl;
  }
  else if(mt3 == 2){
	  cout << "fragata" << endl;
  }
  else if(mt3 == 1){
	  cout << "destroier" << endl;  
  }
  else{
	  cout << "agua" << endl;
  }
  
    
    return 0;
}
