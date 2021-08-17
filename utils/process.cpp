#include <iostream>
#include <unistd.h>


using namespace std;

int main(int argc,char* argv[])
{

while(true)
{

for(int i=0;i<argc;i++)
{
	cout<<argv[i]<<" ";
}

cout<<endl;

usleep(250000);
}

return 0;

}
