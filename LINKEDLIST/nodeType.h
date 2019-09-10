#ifndef H_NodeType
#define H_NodeType

using namespace std;

template <class Type>
struct nodeType
{
    Type info;
    nodeType<Type> *link;
};

#endif