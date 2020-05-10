#ifndef NODE_H
#define NODE_H


class Node
{
public:
    Node();

    void set(int inode, double x, double y);

    double x(int inode) const {return _x[inode];}
    double y(int inode) const {return _y[inode];}

private:

    double _x[1000];
    double _y[1000];
};

#endif // NODE_H
