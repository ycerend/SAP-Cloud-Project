
int _[] = {0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0};
int sifir[]={1,0,0,0,1, 
             0,1,1,1,0, 
             1,0,0,0,1};
int bir[] =  {0,0,0,0,0, 
              1,0,1,1,1, 
              1,1,1,1,1};
             
int iki[] = {0,0,0,1,0, 
             0,1,0,1,0, 
             0,0,0,0,0};
             
int uc[] =  {1,0,1,0,0, 
             0,1,0,1,0, 
             0,1,0,1,0};
             
int dort[] ={1,1,0,1,1, 
             1,0,0,0,0, 
             0,1,0,1,1};
             
int bes[] = {0,1,0,0,0, 
             0,1,0,1,0, 
             0,0,0,1,0};
             
int alti[] ={0,1,0,0,0, 
             0,1,0,1,0, 
             0,0,0,0,0};
             
int yedi[] ={0,0,0,0,0, 
             0,1,0,1,1, 
             0,0,1,1,1};

int sekiz[]={0,0,0,0,0, 
             0,1,0,1,0, 
             0,0,0,0,0};

int dokuz[]={0,0,0,0,0, 
             0,1,0,1,0, 
             0,0,0,1,0};

int A[] = {1,0,0,0,0, 0,1,0,1,1, 1,0,0,0,0};
int B[] = {0,0,0,0,0, 0,1,0,1,0, 1,0,1,0,1};
int C[] = {1,0,0,0,1, 0,1,1,1,0, 0,1,1,1,0};

int D[] = {0,0,0,0,0, 0,1,1,1,0, 1,0,0,0,1};

int E[] = {0,0,0,0,0, 0,1,0,1,0, 0,1,0,1,0};

int F[] = {0,0,0,0,0, 0,1,0,1,1, 0,1,0,1,1};

int G[] = {1,0,0,0,1, 0,1,0,1,0, 1,1,0,0,1};

int H[] = {0,0,0,0,0, 1,1,0,1,1, 0,0,0,0,0};

int I[] = {1,1,1,1,0, 0,1,0,0,0, 1,1,1,1,0};

int J[] = {0,1,1,1,1, 0,1,1,1,0, 0,0,0,0,0};

int K[] = {0,0,0,0,0, 1,1,0,1,1, 1,0,1,0,0};

int L[] = {0,0,0,0,0, 1,1,1,1,0, 1,1,1,1,0};

int M[] = {0,0,0,0,0, 1,0,0,1,1, 1,0,0,0,0};

int N[] = {0,0,0,0,0, 0,1,1,1,1, 1,0,0,0,0};

int O[] = {1,0,0,0,1, 0,1,1,1,0, 1,0,0,0,1};

int P[] = {0,0,0,0,0, 0,1,0,1,1, 1,0,1,1,1};

int Q[] = {1,0,0,0,0, 0,1,1,0,0, 1,0,0,0,0};

int R[] = {0,0,0,0,0, 0,1,0,1,1, 1,0,1,0,0};

int S[] = {1,0,1,1,0, 0,1,0,1,0, 0,1,1,0,1};

int T[] = {1,0,0,0,0, 0,0,0,0,0, 0,1,1,1,1};

int U[] = {0,0,0,0,0, 1,1,1,1,0, 0,0,0,0,0};

int V[] = {0,0,0,0,1, 1,1,1,1,0, 0,0,0,0,1};

int W[] = {0,0,0,0,1, 1,1,0,0,1, 0,0,0,0,1};

int X[] = {0,0,1,0,0, 1,1,0,1,1, 0,0,1,0,0};

int Y[] = {0,0,1,1,1, 1,1,0,1,1, 0,0,0,0,0};

int Z[] = {0,1,1,0,0, 0,1,0,1,0, 0,0,1,1,0};
int letterSpace;
int dotTime=10  000;
void setup()
{
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
 
 
 
}
void printLetter(int letter[])
{
  int y;
 
  // printing the first y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y]);
  }
  delay(dotTime);
 
  // printing the second y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y+5]);
  }
  delay(dotTime);
 
  // printing the third y row of the letter
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, letter[y+10]);
  }
  delay(dotTime);
 
  // printing the sspace between the letters
  for (y=0; y<5; y++)
  {
    digitalWrite(y+2, 0);
  }
  delay(letterSpace);
}
void loop()
{
  // you can print your own text by modifing here :) 
  printLetter(S);
  printLetter(A);
  printLetter(P);
  printLetter(1);
  printLetter(1);
  
}

