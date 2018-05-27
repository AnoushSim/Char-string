#include <iostream>
void reverse_str(char* s);
int main()
{
  char arr[]="anush";
  std::cout<<"Your string is: "<<arr<<"."<<std::endl;
  std::cout<<"Your new reversed string is: ";
  reverse_str(arr);
  std::cout<<arr;
  
  return 0;
}
void reverse_str(char* s)
{
  int tmp;
  char* ptolast=s;
  while(*ptolast!='\0')
      ++ptolast;
      --ptolast;
  while(s<ptolast)
  {
    tmp=*s;
    *s++=*ptolast;
    *ptolast--=tmp;
  }
  
}
