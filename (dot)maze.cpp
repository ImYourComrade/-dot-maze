#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;


// Welcome to (dot)maze! A simple text-based RPG where you try to escape a strange maze...

// Each print statement will have a limit of 150 character per line

void lower(const string str) {
    str = transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
}

void spacer() {
    cout << string(10, '\n');
}

void start_game() {
    cout << R"(
                        dddddddd                                                                                                                                   
       ((((((           d::::::d                          tttt           ))))))                                                                                    
     ((::::::(          d::::::d                       ttt:::t          )::::::))                                                                                  
   ((:::::::(           d::::::d                       t:::::t           ):::::::))                                                                                
  (:::::::((            d:::::d                        t:::::t            )):::::::)                                                                               
  (::::::(      ddddddddd:::::d    ooooooooooo   ttttttt:::::ttttttt        )::::::)   mmmmmmm    mmmmmmm     aaaaaaaaaaaaa   zzzzzzzzzzzzzzzzz    eeeeeeeeeeee    
  (:::::(     dd::::::::::::::d  oo:::::::::::oo t:::::::::::::::::t         ):::::) mm:::::::m  m:::::::mm   a::::::::::::a  z:::::::::::::::z  ee::::::::::::ee  
  (:::::(    d::::::::::::::::d o:::::::::::::::ot:::::::::::::::::t         ):::::)m::::::::::mm::::::::::m  aaaaaaaaa:::::a z::::::::::::::z  e::::::eeeee:::::ee
  (:::::(   d:::::::ddddd:::::d o:::::ooooo:::::otttttt:::::::tttttt         ):::::)m::::::::::::::::::::::m           a::::a zzzzzzzz::::::z  e::::::e     e:::::e
  (:::::(   d::::::d    d:::::d o::::o     o::::o      t:::::t               ):::::)m:::::mmm::::::mmm:::::m    aaaaaaa:::::a       z::::::z   e:::::::eeeee::::::e
  (:::::(   d:::::d     d:::::d o::::o     o::::o      t:::::t               ):::::)m::::m   m::::m   m::::m  aa::::::::::::a      z::::::z    e:::::::::::::::::e 
  (:::::(   d:::::d     d:::::d o::::o     o::::o      t:::::t               ):::::)m::::m   m::::m   m::::m a::::aaaa::::::a     z::::::z     e::::::eeeeeeeeeee  
  (::::::(  d:::::d     d:::::d o::::o     o::::o      t:::::t    tttttt    )::::::)m::::m   m::::m   m::::ma::::a    a:::::a    z::::::z      e:::::::e           
  (:::::::((d::::::ddddd::::::ddo:::::ooooo:::::o      t::::::tttt:::::t  )):::::::)m::::m   m::::m   m::::ma::::a    a:::::a   z::::::zzzzzzzze::::::::e          
   ((:::::::(d:::::::::::::::::do:::::::::::::::o      tt::::::::::::::t ):::::::)) m::::m   m::::m   m::::ma:::::aaaa::::::a  z::::::::::::::z e::::::::eeeeeeee  
     ((::::::(d:::::::::ddd::::d oo:::::::::::oo         tt:::::::::::tt)::::::)    m::::m   m::::m   m::::m a::::::::::aa:::az:::::::::::::::z  ee:::::::::::::e  
       ((((((  ddddddddd   ddddd   ooooooooooo             ttttttttttt   ))))))     mmmmmm   mmmmmm   mmmmmm  aaaaaaaaaa  aaaazzzzzzzzzzzzzzzzz    eeeeeeeeeeeeee  
    )" << endl;

    cout << "Welcome to (dot)maze! Type [Start] to begin: ";
    string input;
    cin >> input;
    input = tolower(input);

    while(tolower(input) != "start")
}


void awake() {
    
    // 
    cout << "You shake yourself awake. Feeling cold, you try to reach for your blanket, only to realize that it isn't there." << endl;
    cout << "You soon realize that the surface wasn't the soft and comforting that you spent many of your nights in either." << endl;
    cout << "Rather it was cold and unfeeling, making your back ache and feel stiff. You snap up, fully awake now." << endl;
    cout << "Propping yourself up with your arms you spin your head around fanatically. Not your room. Nothing like it." << endl;
    cout << "The room was empty. Barren even. The walls. They felt like they were closing in on into you. Their nauseating yellow." << endl;
    cout << "Your eyes lock on a door in front of you..." << endl;
}

void first_room() {
    
}

int main() {
    awake(); 

   return 0;
}




