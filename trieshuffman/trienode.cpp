#include <bits/stdc++.h>
using namespace std;

class trienode
{

public:
    char data;
    trienode **children;
    bool terminal;

    trienode(char data)
    {
        this->data = data;
        children = new trienode *[26];
        terminal = false;

        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
    }
};

class trie
{
    trienode *root;

public:
    trie()
    {
        root = new trienode('\0');
    }

    void insert(string word, trienode *root)
    {

        if (word.length() == 0) // base case
        {
            root->terminal = true;
            return;
        }

        // small calculation
        int index = word[0] - 'a';

        trienode *child;

        // if char is already present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // if not [present ]
        else
        {

            child = new trienode(word[0]);
            root->children[index] = child;
        }

        insert(word.substr(1), child);
    }
    // helper function
    void insert(string word)
    {
        insert(word, root);
    }

    bool search(trienode *root, string word)

    {

        if (word.length() == 0)
            return root->terminal; // base case

        // smalll llllllllllllllllll

        int index = word[0] - 'a';
        trienode *child = root->children[index];

        if (root->children[index] != NULL)
        {
            return search(child, word.substr(1));
        }
        else
        {

            return false;
        }
    }

    bool search(string word)
    {
        return search(root, word);
    }

    void remove(trienode *root, string word)

    {

        if (word.length() == 0)
            root->terminal = false; //  base case
        return;

        int index = word[0] - 'a';
        trienode *child = root->children[index];
        if (child != NULL)
        {
            remove(child, word.substr(1));
        }
        else
            // not found
            return;

        // check useless node

        if (child->terminal == false)
        {
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                    return;
                /* code */
            }
        }
        delete child;
        root->children[index] = NULL;
        cout<<" deleted";
        
    }
    void remove(string word)
    {
        remove(root, word);
    }
};

int main()
{

    trie diction;
    diction.insert(" are");
    diction.insert(" and");
    diction.insert(" assume");
    cout << diction.search(" and");
    cout << diction.search(" are");
    diction.remove(" assume");
}