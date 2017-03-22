#include <stdlib.h>
#include <stdio.h>
#include "String.h"
#include "globalconst.h"
#include "ArrayList.h"

int main(int argc, char **argv)
{
    String *a = malloc(sizeof (String));
    String *b = malloc(sizeof (String));
    String *c = malloc(sizeof (String));
    String *d = malloc(sizeof (String));
    String *e = malloc(sizeof (String));
    String *f = malloc(sizeof (String));
    String *g = malloc(sizeof (String));
    String *h = malloc(sizeof (String));
    String *i = malloc(sizeof (String));
    String *j = malloc(sizeof (String));
    String *k = malloc(sizeof (String));
    String *l = malloc(sizeof (String));
    String *m = malloc(sizeof (String));
    String *n = malloc(sizeof (String));
    String *o = malloc(sizeof (String));
    String *p = malloc(sizeof (String));
    String *q = malloc(sizeof (String));
    String *r = malloc(sizeof (String));
    String *s = malloc(sizeof (String));
    String *t = malloc(sizeof (String));
    String *u = malloc(sizeof (String));
    String *v = malloc(sizeof (String));

    String *aa = malloc(sizeof (String));
    String *bb = malloc(sizeof (String));
    String *cc = malloc(sizeof (String));
    String *dd = malloc(sizeof (String));
    String *ee = malloc(sizeof (String));
    String *ff = malloc(sizeof (String));
    String *gg = malloc(sizeof (String));
    String *hh = malloc(sizeof (String));
    String *ii = malloc(sizeof (String));
   
        //Appendix A
        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\tAPPENDIX A\n");

        //String_Copy                                                                                                           Done
        String_New(a, "Star Wars");
        String_New(b, "");
        size_t hash0 = String_GetHashCode(b);
        printf("String_Copy: \n%s\n%s\n", a->str, b->str);
        printf("%s\n", String_Cpy(b, a)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", hash0, String_GetHashCode(b));

        //String_nCopy                                                                                                          Done
        String_New(c, "Chewbacca");
        String_New(d, "");
        size_t hash1 = String_GetHashCode(d);
        printf("String_nCopy: \n%s\n%s\\n", c->str, d->str);
        printf("%s", String_nCpy(d,c,4)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", hash1, String_GetHashCode(d));

        //String_Cat                                                                                                            Done
        String_New(e, "R2-");
        String_New(f, "D2");
        size_t hash2 = String_GetHashCode(e);
        printf("String_Cat: \n%s\n%s\n%s\n", e->str, f->str, String_Cat(e, f)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", hash2, String_GetHashCode(e));

        //String_nCat                                                                                                           Done
        String_New(g, "Boba ");
        String_New(h, "Fettus");
        size_t hash3 = String_GetHashCode(g);
        printf("String_nCat:\n%s\n%s\n", g->str, h->str);
        printf("%s\n", String_nCat(g, h, 9)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", hash3, String_GetHashCode(g));

        //String_Cmp                                                                                                            Done
        String_New(i, "Darth Vader");
        String_New(j, "Darth Maul");
        printf("String_Cmp: \n%s\n%s\n%d\n\n", i->str, j->str, String_Cmp(i, j));

        //String_nCmp                                                                                                           Done
        String_New(k, "Gen. Greivous");
        String_New(l, "Gen. Veers");
        printf("String_nCmp: \n%s\n%s\n%d\n\n", k->str, l->str, String_nCmp(k, l, 6));

        //String_Chr                                                                                                            Done
        String_New(m, "do or do not, there is no try");
        printf("String_Chr: \n%s\n%s\n\n", m->str, String_Chr(m, 'h')->str);
        
        //String_cSpn                                                                                                           Done
        String_New(n, "chewy");
        String_New(o, "yoda");
        printf("String_cSpn: \n%s\n%s\n%zu\n\n", n->str, o->str, String_cSpn(n, o));

        //String_pBrk                                                                                                           Done
        String_New(p, "Death Star");
        String_New(q, "aeiou");
        printf("String_pBrk: \n%s\n%s\n%s\n\n", p->str, q->str, String_pBrk(p, q)->str);

        //String_rChr                                                                                                           Done
        String_New(r, "do or do not, there is no try");
        size_t r11 = String_GetHashCode(r);
        printf("String_rChr: \n%s\n%s\n", r->str, String_rChr(r, 't')->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", r11, String_GetHashCode(r));
    
        String_New(s, "f5t91260b2r5");
        String_New(t, "0123456789");
        printf("String_Spn: \n%s\n%s\n%zu\n\n", s->str, t->str, String_Spn(s, t));
    
        //String_Str
        String_New(u, "No, I am your mother");
        String_New(v, "your");
        size_t u1 = u->hashCode;
        printf("String_Str: \n%s", u->str);
        
        u = String_Str(u, v);
        
        printf("\n%s\t\t\n", u->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", u1, String_GetHashCode(u));

        //String_Len                                                                                                            Done
        String_New(v, "Jabba The Hutt");
        printf("String_Len: \n%s\n%zu\n\n", v->str, String_Len(v));


    


       
        printf("========================================================================\n\n");
        printf("\t\t\t\tAPPENDIX B\n\n");

        //Appendix B

        //String_Trim                                                                                                           Done
        String_New(aa, "  Clone Troopers  ");
        size_t aa1 = String_GetHashCode(aa);
        printf("String_Trim: \n.%s.\n", aa->str);
        printf(".%s.\n", String_Trim(aa)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", aa1, String_GetHashCode(aa));

        //String_LTrim                                                                                                          Done
        String_New(bb, "  Luke Skywalker");
        size_t bb1 = String_GetHashCode(bb);
        printf("String_LTrim: \n.%s\n", bb->str);
        printf(".%s\n", String_LTrim(bb)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", bb1, String_GetHashCode(bb));

        //String_RTrim                                                                                                          Done
        String_New(cc, "Jabba The Hutt  ");
        size_t cc1 = String_GetHashCode(cc);
        printf("String_RTrim: \n%s.\n", cc->str);
        printf("%s.\n", String_RTrim(cc)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", cc1, String_GetHashCode(cc));

        //String_GetCharFromIndex                                                                                               Done
        String_New(dd, "ABCDE");
        printf("String_GetCharFromIndex: \n%s\n%c\n\n", dd->str, (char) String_GetCharFromIndex(dd, 3));

        //String_IndexOfChar                                                                                                    Done
        String_New(ee, "abcde");
        printf("String_IndexOfChar: \n%s\n%zu\n\n", ee->str, String_IndexOfChar(ee, 'd'));

        //String_Lower                                                                                                          Done                                                                                                      
        String_New(ff, "ABCDE");
        size_t ff1 = ff->hashCode;
        printf("String_Lower: \n%s\n", ff->str);
        printf("%s\n", String_Lower(ff)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", ff1, String_GetHashCode(ff));

        //String_Upper                                                                                                          Done                                                                                                 
        String_New(gg, "abcde");
        size_t gg1 = String_GetHashCode(gg);
        printf("String_Upper: \n%s\n", gg->str);
        printf("%s\n", String_Upper(gg)->str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", gg1, String_GetHashCode(gg));

        //String_Reverse                                                                                                        Done
        String_New(hh, "0123456789");
        size_t hh1 = String_GetHashCode(hh);
        printf("String_Reverse: \n%s\n", hh->str);
        printf("%s\n", String_Reverse(hh)-> str);
        printf("Old Hash: %zu\nNew Hash: %zu\n\n", hh1, String_GetHashCode(hh));

        //String_WordCount                                                                                                      Done
        String_New(ii, "Yoda Obi Ani");
        printf("String_WordCount: \n%s\n%zu\n\n", ii->str, String_WordCount(ii));







    ArrayList * strList = (ArrayList *) malloc(sizeof(ArrayList));
    ArrayList * strListA = (ArrayList *) malloc(sizeof(ArrayList));
    boolean checkList = ArrayList_New(strList);
    boolean checkList2 = ArrayList_New(strListA);
    
    printf("%d",checkList2);
    

    if (checkList == FALSE)
    {
	printf("Error initializing arraylist\n");
        return -1;
    }
    
    //ArrayList_Add
    for (int i = 0; i < 400; i++){
        String * str = (String *)malloc(sizeof(String));
        String * str2 = (String *)malloc(sizeof(String));
        String_New(str, "Programming3");
        String_New(str2,"Programming4");
        ArrayList_Add(strList,str->str);
        ArrayList_Add(strListA,str2->str);
    }
    
    for(int i = 0 ; i < 400 ; i++){
	printf("Element %d is %s\n", i , (char *) strList->arr[i]) ;
    }

    for(int i = 0 ; i < 400 ; i++){
	printf("Element %d is %s\n", i , (char *) strListA->arr[i]) ;
    }

    ArrayList * strList2;
    ArrayList * strList3 ;
    //Test ArrayList_InitStruct
    boolean result = ArrayList_InitStruct(strList2);
    boolean result2 = ArrayList_InitStruct(strList3);

    printf("The List was : %d\n", result) ;
    printf("The List was : %d\n", result2) ;

    //Test ArrayList_Free()
    boolean result3 = ArrayList_Free(strListA) ;
    printf("The List was : %d\n", result3) ;
    


    //ArrayList_Set
    for (int i = 0; i < 400; i++)
    {
        String * str = (String *)malloc(sizeof(String));
        String * str2 = (String *)malloc(sizeof(String));
        String_New(str, "Programming3");
        String_New(str2,"Programming4");
        ArrayList_Add(strList,str->str);
        ArrayList_Add(strListA,str2->str);
    }
/*
    boolean result5 = ArrayList_Set(strList, 400 , "Hello");
    printf("The List was : %d\n", result5) ;

    for(int i = 0 ; i < 20 ; i++)
    {
	printf("Element %d is %s\n", i , (char *) strList->arr[i]) ;
    }
    */

    //ArrayList_Clear
    for (int i = 0; i < 10; i++)
    {
        String * str = (String *)malloc(sizeof(String));
        String_New(str, "Programming3");
        ArrayList_Add(strList,str->str);
    }
   
	ArrayList_Clear(strList);

   
    for(int i = 0 ; i < 10 ; i++)
    {
	printf("Element %d is %s\n", i , (char *) strList->arr[i]) ;
    }

    return 0;
}


