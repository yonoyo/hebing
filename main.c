#define MaxSize 50
typedef struct{
    ElemType data[MaxSize];
    int length;
}SeqList;
void hebing(SeqList la,SeqList lb,SeqList lc){
    int j=0,i=0,k=0;
    if(la.length+lb.length>lc.length)
        return false;
    while(la.length>i&&lb.length>j){
        if(la.data[i]>=lb.data[j]){
            lc.data[k++]=lb.data[j++]
            else
                lc.data[k++]=la.data[i++]
        }
    }
    while(la.length>i){
        lc.data[k++]=la.data[i++];
    }
    while(lb.length>j){
        lc.data[k++]=la.data[j++];
    }
    lc.length=k;
    return ture;
}
