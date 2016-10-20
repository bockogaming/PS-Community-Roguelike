#include <iostream>
using namespace std;
struct magic {
	int fireblast = 50; // strong against ice
	
	int iceblast = 50; // against earth
	
	int earthblast = 50; // againts ligthning(immune)
	
	int ligthningblast = 50;//strong againts water
	
		int waterblast = 50; //against fire
	
	int megablast = 100;//damages player himself by 50
	};//end
	
struct potions {
	int SmallPotion = 10,MediumPotion = 30,LargePotion = 50;//heals depending on health

};//end	
	
struct character {
	char body = '@';
	int x = 1;
	int y = 1;
}ch;

struct map{
	
	char game_map[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},
						     {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '+', '+', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '/', '\\', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '|', '|', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},};
    
    void display_map(){
        // maybe we shouldn't use hard-coded values for the loops' upper bounds?
        for(int x=0; x<12; ++x){
            for(int y=0; y<12; ++y){
                cout << game_map[x][y] << " ";
            }
            cout << endl;
        }    
    }
    
    void draw_character() {
        game_map[ch.x][ch.y] = ch.body;
    }
}handle;

void draw_world() {
    system("cls");
    handle.draw_character();
    handle.display_map();
}

int main() {
    // intro message
    cout << "\n\t\t Welcome To Mission impossible Rogue !" << endl
         << "Start the game: y" << endl 
         << "Quit: q" << endl;
    
    cin.ignore();
    char start;  // user's choice to start game
    char choice; // user's choice of action
    
    start = cin.get();
    if(start == 'n' || start == 'N') {
        exit(0);
    } else {
        
        system("cls");
        while(true) { // main game loop
            draw_world();
            cout << endl << "What will you do?" << endl;
            
            cin.ignore();
            choice = cin.get();
            
            switch(choice) {
                
                case 'q': // quit
                case 'Q':
                    exit(0); 
                    break;
                
                // movement commands:
                case 'w': // up
                case 'W':
                    break;
                case 'a': // left
                case 'A':
                    break;
                case 's': // down
                case 'S':
                    break;
                case 'd': // right
                case 'D':
                    break;
                
                default:
                    cout << "\n Wrong key pressed";
                    continue;    
            }
        }
    }
    return 0;
}

