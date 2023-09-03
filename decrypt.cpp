#include <iostream>
#include <string>
#include <ctype.h>
#include<math.h>
using namespace std;
int main(){
  string word = " ";
  for(int i = 0; i < 105; i++){
  word = word + " ";
  }
  string line = "";
  int x = 0;
  int a;
  string L;
  double b;
  while (true){
  x++;
  cout << "Enter key: ";
  cin >> line;
    int pos = line.find("|"); 
    string sub = line.substr(pos + 1, line.length());
    string sub2 = line.substr(0,3);
    L = line[3];
    int eq = L.compare("`");
    int pq = L.compare("~");
    if(eq == 0)
      L = ' ';
    else if(pq == 0)
      L = '.';
    a = stoi(sub2); //wa
    b = stod(sub); //n
  double c = (((((b - pow(a,7))* 36882.81)*(89.729*a)) /(41.12+(a*1.632)) - 1529.1271) / pow(a, 8)) - a;
  c = round(c);
  word.replace(c, 1, L);
  cout << word + "\n";
  }
}
