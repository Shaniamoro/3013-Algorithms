#include <iostream>
#include "bsTree.cpp"

using namespace std;

int main()
{
    srand(2342);
    BSTree B;

    ifstream fin;
    string word;   

    // open the "adjectives" file for reading
    fin.open("./word_files/adjectives.txt");

    // used as a counter
    int i=0;

    // while there are more words.
    while(!fin.eof()){
        fin>>word;
        cout<<word<<endl;
        B.insert(word);
        i++;
        if(i>2000){
            // We used this if to load a specific amount of words into
            // the tree. Commenting out the break loads all the words
            // from the above file.
            //break;
        }
    }

    // Show a graphviz linked version of the tree. 
    B.GraphVizOut("bsTree_viz.txt");
    return 0;
}