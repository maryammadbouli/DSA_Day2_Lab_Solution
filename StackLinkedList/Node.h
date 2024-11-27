#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node *prev;
        int Data;
        Node(int d){
            Data = d;
            prev = NULL;
        }

    protected:

    private:
};

#endif // NODE_H
