template <typename T>
class binarytree
{
public:
    T data;
    binarytree *left;
    binarytree *right;

    binarytree(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
    ~binarytree()
    {
        delete left;
        delete right;
    }
};
