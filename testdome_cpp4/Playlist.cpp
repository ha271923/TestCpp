#include <stdexcept>
#include <iostream>
#include <unordered_set>

using namespace std;

class Song
{
public:
    Song(std::string name): name(name), nextSong(NULL) {}
    
    void next(Song* song)
    {
        this->nextSong = song;
    }

    bool isRepeatingPlaylist()
    {
       Song * temp = this;
       unordered_set <string> UniquePlaylist;
        
        while(temp != NULL)
       {
           
           
           auto inserted =  UniquePlaylist.insert(temp->name);
            
          /* for(auto& iter:UniquePlaylist)
          {
             cout<< "Name of the songs in the list are "<< iter<<endl;
           }
           
           cout<<"***************************************************"<<endl;
          cout<<"The song name is " << temp->name<< " and the song insertion is "<< std::boolalpha<<inserted.second<<endl;
          */
          
            if (!inserted.second) 
            return true;
            
           temp = temp->nextSong;
           
         
       }
        
        return false;
      
    }

private:
    const std::string name;
    Song* nextSong;
};

#ifndef RunTests
int main()
{
    Song* first = new Song("Moonlight Sonanta");
    Song* second = new Song("tumhain dillagi");
    Song* third = new Song("tanhai");
    Song* fourth = new Song("doori na rahay koi");
    Song* fifth = new Song("raina beeti jaey"); 
   
    
    first->next(second);
    second->next(third);
    third->next(fourth);
    fourth->next(fifth);
    fifth->next(first);
    

    std::cout << std::boolalpha << first->isRepeatingPlaylist();
}
#endif
