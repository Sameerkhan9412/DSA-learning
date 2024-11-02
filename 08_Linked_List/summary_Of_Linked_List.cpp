/*
------------------------------------------
        addtitional things:
        ----------------------------------------------
        
        ques 1:
        we can use struct as place of class,
        but now the ques comes, what is the diffrence between struct and class,
        ans is: we can use use struct in place of class but the diffrence is in struct all things are public and in class things can be in public,private,protected
            in other way we can, scope k diffrence hai.
            
        or ek diffrence kahani wala h, struct jb bna tha wo c language me bna tha , mtlb ise c me invent kiya tha, uske baad inventor ko struct jaisa kuchh bnana tha cpp me , to usne ise class k naam dediya.or usne ye define krdiya krdiya, ki jb bbhi mujhe data bundling krni hogi struct use krunga, but jb mujhe oops k concept apply krne honge tb me class k use krunga.
        
        ----------------------------------------------------
        ques 2:computer scinece k ander konsi esi application h , jahan pr LL k sbse jyada use use hota hai?
        -> free space management, ram k ander jo location free h, uski linked list bnke rkhte hai,
        
        ------------------------------------------------------------
        edge cases in linked list for deletion :
        1) empty hua tb,
        2)starting node hua tb,,
        3) ending node hua tb
        4)middle me huat tb
        5) head or tail donoe equwal huy tbJ-> ek hi node hua tb.
        
        -> very important for an interview.
        
        --------------------------------------------
        ques 3:
        jb doubly linked list sb sambhalti hai , tb why we need singly linked list?
        doubly linekd list take more size
        signy lined list save resourse which is memory
        
        --------------------------------------------------
        logic for printing circular linked list:
        
        *it=head;
        while(1){
            if(it->next==head){
                break;
            }
            it=it->next;
        }
        this is a logic wihtour using map 😊
        
        -------------------------------------
        most imp suggestion:
        jb bhi interview me agr aata hua ques bhi poocha jaye tb statring me brute force method hi btana h, direct jump nhi krna, thodi bkwas krni hai, jisse interview smjhe ki yeh bnda 360 direction me soch rha hai
        
        -------------------------------------------------------
        ques 4:check plaindrome using linked list:
        1) create a new linked list and reverse it and compare-> space complexity jyda lega
        2) find mid element and divide the LL into tow half and push second helf into into stack and pop 1 element from stack and compare with LL first element.
        pehle first approach btani hai to make bkwaas
        
        ---------------------------------------------------
        ques 5: check loop in a LL
            step 1: loop detect->S==F
            step 2:S=head;
            step 3:while(S!=F){
                s++,f++;
            }
        

*/
