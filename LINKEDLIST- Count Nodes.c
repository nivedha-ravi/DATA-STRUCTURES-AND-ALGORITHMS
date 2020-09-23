int getCount(struct Node *head)
{
    struct Node *ptr=head;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}
