#include<iostream>
using namespace std;
class movie{
    public:
        string title;
        string genre;
        int releasedyear;

    void getData(){
        cout << "Enter movie title : ";
        cin >> title;
        cout << "Enter movie genre : ";
        cin >> genre;
        cout << "Enter released year of the movie : ";
        cin >> releasedyear;
    }

    void display(){
        cout << "Movie title is : " << title << endl;
        cout << "Movie genre is : " << genre << endl;
        cout << "Released year of the movie is : " << releasedyear  << endl;
    }
};
int main()
{
    movie m[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of movie " << i + 1 << endl;
        m[i].getData();
    }

    cout << "\n----- Movie details  -----\n";

    for(int i = 0; i < 5; i++)
    {
        m[i].display();
    }

    return 0; 
}