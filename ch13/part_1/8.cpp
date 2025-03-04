template<class T>
class Node {
public:
    T data;
    Node<T> *link;
    Node(const T &info) {
        data = info;
        link = NULL;
    }
};

template<class T>
class OrderedLink {
    Node<T> *head;
public:
    OrderedLink() {
        head = NULL;
    }

    OrderedLink(const T *list, int num) {
        head = NULL;
        for( ; num > 0; num--, list++) {
            Insert(*list);
        }
    }

    ~OrderedLink() {
        while(head != NULL) {
            Node<T> *P = head;
            head = P->link;
            delete P;
        }
    }

    void Insert(const T &data) {

    }
};

int main() {
    char *s = "bad";

}