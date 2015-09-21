void insert_first(List *L,element *p)
{
    cout<<"Insert Data on First"<<endl<<endl;
    pegawai peg;
    input_data(&peg);
    p = alokasi(peg);
    p->next = (*L).head;
    (*L).head = p;
    cout<<endl<<"Insert Data on First Success!"<<endl;
    _getch();
}

void insert_last(List *L,element *p)
{
    cout<<"Insert Data on Last"<<endl<<endl;
    element *q;
    pegawai peg;
    input_data(&peg);
    p = alokasi(peg);
    if ((*L).head == NULL)
    {
        p->next = NULL;
        (*L).head = p;
    }
    else
    {
        q = (*L).head;
        while(q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        p->next = NULL;
    }
    cout<<endl<<"Insert Data on Last Success!"<<endl;
    _getch();
}
