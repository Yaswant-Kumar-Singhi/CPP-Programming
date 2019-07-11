class sum
{
    int a,b;
    public:
        void setData();
        void showData();
        void printsum();
};

void sum::setData()
{
    cout<<"Enter values for an and b"<<endl;
    cin>>a>>b;
}
void sum::showData()
{
    cout<<endl
    cout<<a<<b;
}

void sum::printsum()
{
    int s;
    s=a+b;
    cout<<s;
}

int main()
{
    sum s1;
    s1.setData();
    s1.showData();
    s1.printsum();
    return 0;
}

