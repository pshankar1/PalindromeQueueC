#include <functional>
#include <iostream>
#include <string>
#include<queue>
#define _LINKEDLIST_H_
int main() {
  std::string ps="madam";
   std::cout<<"Is "+ps+" a Palindrome??";

    queue q= new LinkedList();
/********
For loop will go through out word(ps)
and add each letter of it with CharAt onto the queue
and decrement until all componenst of ps are inputed into queue
*********/
    for(int i=ps.length()-1;i>=0;i--){
      q.add(ps.charAt(i));
    }

/********
if the queue is not empty it will inpute the queue
into an empty String as a place holder to check if 
the string is the same inputted backwards
******/
    String backward="";
    while(!q.isEmpty()){
      backward=backward+q.remove();
    }

/*******
if the word is the same backwords then it IS a Palindrome
if the word is not the same backwards then it IS NOT a Palindrome
********/
    if(ps.equals(backward))
     std::cout<<("Yes");

    else
      std::cout<<("No");
    


  }
}