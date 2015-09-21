void delete_last(List *L, element *p)
{
    cout<<"Delete Last Data"<<endl;
    element *q;
    if ((*L).head == NULL)
    {
        cout<<"There is no data to delete!"<<endl;
    }
    else
    {
        q = (*L).head;
        if (q->next == NULL)
        {
            delete q;
            (*L).head = NULL;
        }
        else
        {
            while( (q->next)->next != NULL)
            {
                q = q->next;
            }
            p = q->next;
            p->next = NULL;
            q->next = NULL;
            delete p;
        }
        cout<<endl<<"Delete Last Data Success!"<<endl;
    }
    _getch();
}

void view_all(List *L)
{
    cout<<"View All Data ID and Name"<<endl<<endl;
    element *p;
    if ((*L).head == NULL)
    {
        cout<<"Empty Database"<<endl;
    }
    else
    {
        p = (*L).head;
        cout<<p->info.id<<", "<<p->info.nama<<endl;
        while(p->next != NULL)
        {
            p = p->next;
            cout<<p->info.id<<", "<<p->info.nama<<endl;
        }
    }
    _getch();
}
