const int maxn = 100005;
int a[maxn], t[maxn], n;
void msort(int l, int r)
{
    int mid = (l + r) >> 1;
    if(l != r) msort(l, mid), msort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while(i <= mid && j <= r)
    {
        if(a[i] <= a[j]) t[k++] = a[i++];
        else t[k++] = a[j++];
    }
    while(i <= mid) t[k++] = a[i++];
    while(j <= r) t[k++] = a[j++];
    for(i = l; i <= r; i++) a[i] = t[i];
}
