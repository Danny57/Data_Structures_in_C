#include <stdlib.h>
#include <stdio.h>
#include "String.h"
#include "globalconst.h"
#include "ArrayList.h"
/*
int main(int argc, char **argv) {

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
 
    return 0;
}
*/

/*Appendix A*/

String* String_Cpy(String *destination, const String *source) {
    destination->size = source->size;

    int i = 0;
    for ( ; (source->str[i]) != '\0'; i++) {
        destination->str[i] = source->str[i];
    }
    destination->str[i] = '\0';
    destination->hashCode = String_CreateHash(destination->str);

    return destination;
}

String* String_nCpy(String *destination, const String *source, size_t num) {
    destination->size = source->size;

    int i = 0;
    for ( ; (i < num) && (source->str[i]) != '\0'; i++) {
        destination->str[i] = source->str[i];
    }
    destination->str[i] = '\0';
    destination->hashCode = String_CreateHash(destination->str);

    return destination;
}

String *String_Cat(String *destination, const String *source) {
    int totalChars = destination->size + source->size;
    String *newString = String_NewStruct2(totalChars);
    int count = 0;
    int i = 0;
    int j = 0;

    for ( ; destination->str[i] != '\0'; ++i) {
        newString->str[i] = destination->str[i];
        count++;
    }
    for ( ; source->str[j] != '\0'; ++j) {
        newString->str[count] = source->str[j];
        count++;
    }
    newString->str[count] = '\0';
    destination->hashCode = String_CreateHash(newString->str);

    return newString;
}

String *String_nCat(String *destination, const String *source, size_t num) {
    String *newString = String_NewStruct2(num);
    int count = 0;
    int i = 0;
    int j = 0;

    for ( ; (destination->str[i] != '\0') && (count < num); ++i) {
        newString->str[i] = destination->str[i];
        count++;
    }
    for ( ; (source->str[j] != '\0') && (count < num); ++j) {
        newString->str[count] = source->str[j];
        count++;
    }
    newString->str[count] = '\0';
    destination->hashCode = String_CreateHash(newString->str);
    destination->str = newString->str;
    return destination;
}

int String_Cmp(const String *str1, const String *str2) {
    for (int i = 0; str1->str[i] != '\0' || str2->str[i] != '\0'; i++) {
        if (str1->str[i] < str2->str[i]) {
            return -1;
        } else if (str1->str[i] > str2->str[i]) {

            return 1;
        }
    }
    return 0;
}

int String_nCmp(const String *str1, const String *str2, size_t num) {
    for (int i = 0; (str1->str[i] != '\0' || str2->str[i] != '\0') && i < num; i++) {
        if (str1->str[i] < str2->str[i]) {
            return -1;
        } else if (str1->str[i] > str2->str[i]) {

            return 1;
        }
    }
    return 0;
}

String *String_Chr(String *str, int character) {
    String *newString = (String*) malloc(sizeof (String));

    for (int i = 0; (str->str[i]) != '\0'; i++) {
        if ((str->str[i]) == character) {
            String_New(newString, &(str->str[i]));
            newString->str[0] = str->str[i];
            newString->str[1] = '\0';

            return newString;
        }
    }
    return NULL;
}

size_t String_cSpn(const String *str1, const String *str2) {

    int i = 0 ;
    for ( ; str1->str[i] != '\0'; i++) {
        for (int j = 0; str2->str[j] != '\0'; j++) {
            if (str1->str[i] == str2->str[j]) {

                return i;
            }
        }
    }
	return i ;
}

String *String_pBrk(String *str1, const String *str2) {
    String *newString = (String*) malloc(sizeof (String));
    String_New(newString, "");

    int danny = 0;

    for (int i = 0; str1->str[i] != '\0'; i++) {
        for (int j = 0; str2->str[j] != '\0'; j++) {
            if (str1->str[i] == str2->str[j]) {
                newString->str[danny] = str2->str[j];
                danny++;
            }
        }
    }
    newString->str[danny] = '\0';

    return newString;
}

String *String_rChr(String *str, int character) {
    String *newString = (String*) malloc(sizeof (String));

    for (int i = str->size; (str->str[i]) >= 0; i--) {
        if ((str->str[i]) == character) {
            String_New(newString, &(str->str[i]));
            newString->str[0] = str->str[i];
            str->hashCode = String_CreateHash(newString->str);
            return newString;
        }
    }
    return NULL;
}

size_t String_Spn(const String * str1, const String * str2) {
    int i = 0;
    int j = 0;
    int counter = 0;
    
    for (; i < str1->size ; i++) {
        for (; j < str2->size; j++) {

            if (str1->str[i] == str2->str[j]) {
                counter++;
            }
        }
        j = 0 ;
    }
    return counter;
}

String * String_Str(String * str1, const String * str2) {
    String *newString;
    //String_InitStruct(newString);
    newString = (String *) malloc(sizeof(String));
    int subStrCount = str2->size;
    int j;
    //int currentStringCount;

    for (int i = 0; i < (str1->size); ++i) {
        j = 0;
        //currentStringCount = 0;
        while (str1->str[i + j] == str2->str[j] && j <= subStrCount) {
            j++;
            if (j == subStrCount) {
                String_New(newString, &(str1->str[i]));

                return newString;
            }
        }
    }
    return NULL;
}

size_t String_Len(const String * str) {
    int totalCharacters = 0;
    for (int i = 0; str->str[i] != '\0'; ++i) {

        totalCharacters++;
    }
    return totalCharacters;
}

size_t String_GetHashCode(const String * str) {
    size_t hash = str->hashCode;

    return hash;
}

size_t String_CreateHash(const char *str) {
    size_t hash = 5381;
    int c;

    while ((c = *(str++))) {

        hash = ((hash << 5) + hash) + c;
    }
    return hash;
}

/*Appendix B*/

String * String_LTrim(String * str) {
    int numWSpaces = 0;
    for (int i = 0; str->str[i] == ' '; i++) {
        numWSpaces++;
    }
    if (numWSpaces == str->size) {
        return NULL;
    }
    str->str = &(str->str[numWSpaces]);
    str->size = str->size - numWSpaces;
    str->hashCode = String_CreateHash(str->str);

    return str;
}

String * String_RTrim(String * str) {
    int n = String_ChrLen(str->str);
    while ((n > 0)&&(str->str[--n] == ' '));

    str->str[n + 1] = '\0';
    str->size = String_ChrLen(str->str);
    str->hashCode = String_CreateHash(str->str);

    return str;
}

String * String_Trim(String * str) {
    str = String_LTrim(str);
    str = String_RTrim(str);
    str->hashCode = String_CreateHash(str->str);

    return str;
}

size_t String_GetCharFromIndex(const String * str, int index) {

    return str->str[index];
}

size_t String_IndexOfChar(const String * str, char c) {
    for (int i = 0; str->str[i] != '\0'; i++) {
        if (str->str[i] == c) {

            return i;
        }
    }
    return -1;
}

String * String_Lower(String * str) {
    for (int i = 0; str->str[i] != '\0'; i++) {
        if (str->str[i] >= 65 && str->str[i] <= 90) {
            int character = str->str[i];
            character = character + 32;
            str->str[i] = character;
        }
    }

    str->hashCode = String_CreateHash(str->str);

    return str;
}

String * String_Upper(String * str) {
    for (int i = 0; str->str[i] != '\0'; i++) {
        if (str->str[i] >= 97 && str->str[i] <= 172) {
            int character = str->str[i];
            character = character - 32;
            str->str[i] = character;
        }
    }
    str->hashCode = String_CreateHash(str->str);

    return str;
}

String * String_Reverse(String * str) {
    int totalLength = str->size;
    char * start = (char*) &(str->str[0]);
    char * end = &(str->str[totalLength]);
    char * original = start;
    char temp;
    int c = 0;
    //Special Case
    if (totalLength <= 1) {
        return str;
    }
    for ( ; c < totalLength / 2; c++) {
        temp = *(end - 1);
        *(end - 1) = *(start);
        *(start) = temp;
        start++;
        end--;
    }
    str->str = original;
    str->hashCode = String_CreateHash(str->str);

    return str;
}

size_t String_WordCount(const String * str) {
    int wordFlag = 0;
    int wSpaceFlag = 0;
    int wordCount = 0;

    if (str->str[0] == ' ') {
        wSpaceFlag = 1;
    } else {
        wordCount++;
    }

    for (int i = 1; str->str[i] != '\0'; i++) {
        if (str->str[i] != ' ' && wSpaceFlag == 1) {
            wordCount++;
            wSpaceFlag = 0;
            wordFlag = 1;
        }
        if (str->str[i] != ' ' && wordFlag == 1) {
            continue;
        } else {

            wSpaceFlag = 1;
        }
    }
    return wordCount - 1;
}

String * String_NewStruct(String * strObject) {
    String *temp = (String *) malloc(sizeof (String));
    temp->size = strObject->size;
    temp->str = (char *) malloc(1 + strObject->size * sizeof (char));
    temp->str = strObject->str;
    temp->hashCode = 1;

    return temp;
}

String * String_NewStruct2(int numChars) {
    String *temp = (String *) malloc(sizeof (String));
    temp->size = numChars;
    temp->str = (char *) malloc(1 + numChars * sizeof (char));
    temp->hashCode = 1;

    return temp;
}

void String_InitStruct(String * strObj) {

    strObj = (String *) malloc(sizeof (String));
}

int String_ChrLen(char *str) {
    char * tmp = str;
    int count = 0;
    while (*tmp != '\0') {

        count++;
        tmp++;
    }
    return count;
}

int String_EqualLen(String *lhs, String *rhs) {

    return (lhs->size == rhs->size);
}

int String_New(String * strObj, char * str) {
    strObj->size = String_ChrLen(str);
    strObj->str = (char *) malloc(1 + sizeof (char) * strObj->size);

    if (strObj->str == NULL)
        return 0;
    int i = 0;
    for (; i < strObj->size; i++)
        strObj->str[i] = str[i];
    strObj->str[i] = '\0';
    strObj->hashCode = String_CreateHash(strObj->str);

    return 1;
}

int String_New2(String * strObj, char * str, int stringSize) {
    strObj->size = stringSize;
    strObj->str = (char *) malloc(1 + sizeof (char) * stringSize);
    if (strObj->str == NULL)
        return 0;
    for (int i = 0; i < stringSize; i++)
        strObj->str[i] = str[i];

    return 1;
}

int String_Equal(String * lhs, String * rhs) {
    if (!String_EqualLen(lhs, rhs))
        return 0;
    for (int i = 0; i < lhs->size; i++)
        if (lhs->str[i] != rhs->str[i]) {

            return 0;
        }
    return 1;
}

void String_Delete(String * strObj) {

    strObj->size = -1;
    free(strObj->str);
    strObj->str = NULL;
}

char * String_Get(String * strObj) {

    return strObj->str;
}

int String_Append(String * strObj, char * strAppend) {
    int sizeOfNewString = String_ChrLen(strAppend);
    char * tmp = realloc(strObj->str, strObj->size + sizeOfNewString);
    if (tmp == NULL)
        return 0; //false --- you can use FALSE instead of 0

    strObj->str = tmp;
    int i = strObj->size;
    int k = 0;
    while (strAppend[k] != '\0') {
        strObj->str[i++] = strAppend[k++];
    }
    strObj->size = i;

    return 1;
}
