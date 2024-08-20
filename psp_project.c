#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void electronics();                           
void books();                                
void shoes();                               
void fashions();                            
void appliances();                          
void furnitures();
void grocceries();
void beauty();
void pharmacy();
void sports();
void delete_electronics();
void delete_books();
void delete_shoes();
void delete_fashions();
void delete_appliances();
void delete_furnitures();
void delete_grocceries();
void delete_beauty();
void delete_pharmacy();
void delete_sports();
void change();
void bill();
int i,n,eid,ei,ne,bid,bi,nb,sid,si,ns,fid,fi,nf,aid,ai,na,uid,nu,ui,uf,gid,gi,ng,ny,yid,yi,yf,pid,pi,np,tid,ti,nt,tf;
int delid,pos=0,changeid=0,j,id,total,totale,totalb,totals,totalf,totala,totalu,totalg,totaly;
int totalp,totalt,house_no;
long long int phone_no;
char ech,bch,sch,fch,ach,uch,gch,ych,pch,tch,ch,name[50],adress_state[50],adress_district[50],adress_street[50],adress_city[50];
struct elctronics_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct elctronics_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}ec[10];
struct books_items
{
	int id;
	char item_name[50];
	char author_name[50];
	int price;
	int rating;
};
struct books_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}bc[10];
struct shoes_items
{
	int id;
	char brand[50];
	int price;
	int rating;
};
struct shoes_cart
{
	int id;
	char brand[50];
	int price;
	int no_items;
}sc[10];
struct fashion_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct fashion_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}fc[10];
struct appliances_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct appliances_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}ac[10];
struct furnitures_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct furnitures_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}uc[10];
struct grocceries_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct grocceries_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}gc[10];
struct beauty_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct beauty_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}yc[10];
struct pharmacy_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct pharmacy_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}pc[10];
struct sports_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct sports_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}tc[10];
main()
{
	printf("\t\t\t(:(:<==<==<==<==*****WELCOME TO SRU ONLINE SHOPPING*****==>==>==>==>:):)");
	int n,ch,ic,p;
	char c;
	do{
		printf("\n\n\n[1].\tDisplay all kinds of items available to buy :)");
		printf("\n[2].\tDisplay the total no.of items added :)");
		printf("\n[3].\tDelete any item which is selected:)");
		printf("\n[4].\tChange the quantity of any item selected:)");
		printf("\n[5].\tBill the items selected:)\n");
		printf("\n**Enter yor choice==>");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n1.Electronic Items\n");
			       printf("2.Books Items\n");
			       printf("3.Foot wear Items\n");
			       printf("4.Fashion Items\n");
			       printf("5.Appliances Items\n");
			       printf("6.Furniture Items\n");
			       printf("7.Grocceries Items\n");
			       printf("8.Beauty Items\n");
			       printf("9.Pharmacy Items\n");
			       printf("10.Sports Items\n"); 
			       printf("\n\n\tChoose the kind of the item you want to buy==>");
			       scanf("%d",&ic);
			       switch(ic)
			       {
			       	case 1:printf("\n\nId\tItem\t\t\tCompany\t\t\tPrice\t\tRating\n");
			       	        electronics();
						    break;
                    case 2:printf("\n\nId\tName\t\t\tAuthor Name\t\t\tPrice\t\tRating\n");
			       	        books();
			       	        break;
			       	case 3:printf("\n\nId\\t\tBrand\t\tPrice\t\tRating\n");
			       	        shoes();
			       	        break;
			       	case 4:printf("\n\nId\tItem\t\t\tCompany\t\t\tprice\t\tRating\n");
			       	        fashions();
			       	        break;
			       	case 5:printf("\n\nId\tItem\t\t\tCompany\t\t\tprice\t\tRating\n");
			       	        appliances();
			       	        break;
			       	case 6:printf("\n\nId\tItem\t\t\tCompany\t\t\tprice\t\tRating\n");
			       	        furnitures();
			       	        break;
			       	case 7:printf("\n\nId\tItem\t\t\t\tCompany\t\t\tprice\t\tRating\n");
			       	        grocceries();
			       	        break; 
					case 8:printf("\n\nId\tItem\t\t\t\tCompany\t\tprice\t\tRating\n");
			       	        beauty();
			       	        break;
					case 9:printf("\n\nId\tItem\t\t\t\tCompany\t\tprice\t\tRating\n");
			       	        pharmacy();
			       	        break;	
					case 10:printf("\n\nId\tItem\t\t\tCompany\t\tprice\t\tRating\n");
			       	        sports();
			       	        break;	   	   		          
					}
				   break;
			case 2:if(ec[0].id!=0)
		        {
			        printf("<=== Electronic Items ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("<=== Books Items ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("<=== Foot wear  ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			    }
			    if(fc[0].id!=0)
		        {
			        printf("<===  Fashion Items  ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayf(fc,fi);
			    }
			    if(ac[0].id!=0)
			    {
			        printf("<===  Appliances Items ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaya(ac,ai);
			    }
			    if(uc[0].id!=0)
		        {
			        printf("<===  Furniture items  ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayu(uc,ui);                                               
			    }
			    break;
			    if(gc[0].id!=0)
		        {
			        printf("<=== Grocceries Items  ===>\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayg(gc,gi);
			    }
			    if(yc[0].id!=0)
		        {
			        printf("<===  Beauty Items  ===>\n");      
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayy(yc,yi);
			    }
			    if(pc[0].id!=0)
		        {
			        printf("<===  Pharmacy Items  ===>\n");     
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayp(pc,pi);
			    }
			    if(tc[0].id!=0)
		        {
			        printf("<===  Sports Items  ===>\n");    
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayt(tc,ti);
			    }
			case 3:if(ec[0].id!=0)
		        {
			        printf("--------------Electronic Items -----------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("---------------Books items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("---------------Shoes items---------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			   }
			   if(fc[0].id!=0)
		        {
			        printf("---------------fashion items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(fc,fi);
			    }
			    if(ac[0].id!=0)
			    {
			        printf("---------------Appliances items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaya(ac,ai);
			    }
			    if(uc[0].id!=0)
		        {
			        printf("---------------furnitures items----------------------\n");      
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayu(c,ui);
			    }
			    if(gc[0].id!=0)
		        {
			        printf("---------------grocceries items----------------------\n");        
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayg(gc,gi);
			    }
			    if(yc[0].id!=0)
		        {
			        printf("---------------beauty items----------------------\n");           
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayy(yc,yi);
			    }
			    if(pc[0].id!=0)
		        {
			        printf("---------------pharmacy items----------------------\n");          
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayp(pc,pi);
			    }
			    if(tc[0].id!=0)
		        { 
			        printf("---------------sports items----------------------\n");         
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(tc,ti);
			    }
			    do
				 {
			     printf("Enter the id of the product you wish to delete:-");
				 scanf("%d",&delid);
				 id=delid/100;
				 switch(id)
				    {
				 	case 1:delete_electronics(delid,ei);
				 	break;
				 	case 2:delete_books(delid,bi);
				 	break;
				 	case 3:delete_shoes(delid,si);
				 	break;
				 	case 4:delete_fashions(delid,fi);
				 	break;
				 	case 5:delete_appliances(delid,ai);
				 	break;
				 	case 6:delete_furnitures(delid,ui);
				 	break;
				 	case 7:delete_grocceries(delid,gi);
				 	break;
				 	case 8:delete_beauty(delid,yi);
				 	break;
				 	case 9:delete_pharmacy(delid,pi);
				 	break;
				 	case 10:delete_sports(delid,ti);
				 	break;
				    }
				printf("\nEnter d to delete more item:");
				scanf(" %c",&ch);
			    }
			while(ch=='d');
			     break;
			case 4:if(ec[0].id!=0)
		        {
			        printf("---------------electronic items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("---------------Books----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("---------------Shoes----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			    }
			    if(fc[0].id!=0)
		        {
			        printf("---------------fashion----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(fc,fi);
			    }
				if(ac[0].id!=0)
			    {
			        printf("---------------appliances----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(ac,ai);
			    }
			    if(uc[0].id!=0)
			    {
			        printf("---------------funitures----------------------\n");
			        printf("Id\tName\\t\tprice\tNo.of items\n");
			        displayu(uc,ui);
			    }
			    if(gc[0].id!=0)
			    {
			        printf("---------------grocceries----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayg(gc,gi);
			    }
			    if(yc[0].id!=0)
			    {
			        printf("---------------beauty----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayy(yc,yi);
			    }
			    if(pc[0].id!=0)
			    {
			        printf("---------------pharmacy----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(pc,pi);
			    }
			    if(tc[0].id!=0)
			    {
			        printf("---------------sports----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(tc,ti);
			    }
			    change();
			       break;
			case 5:bill();
			exit(0);
			break;  
	}
	printf("press [y]to display options(yes):");
	scanf(" %c",&c);
}while(c=='y');
}
void electronics()
{
	struct elctronics_items e1={101,"Laptop","HP",65990,8};
	struct elctronics_items e2={102,"Mobile","Samsung",20300,9};
	struct elctronics_items e3={103,"Television","V.U",42595,10};
	struct elctronics_items e4={104,"Camera","Canon",75000,7};
	struct elctronics_items e5={105,"Refrigerator","whirphool",38500,9};
	printf("*************************************************************************************");
	printf("\n%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",e1.id,e1.item_name,e1.cpny_name,e1.price,e1.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",e2.id,e2.item_name,e2.cpny_name,e2.price,e2.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",e3.id,e3.item_name,e3.cpny_name,e3.price,e3.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",e4.id,e4.item_name,e4.cpny_name,e4.price,e4.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e5.id,e5.item_name,e5.cpny_name,e5.price,e5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&eid);
	switch(eid)
	{
		case 101:printf("Enter The no.of %s you want to add:",e1.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e1.id;
		       strcpy(ec[ei].item_name,e1.item_name);
		       ec[ei].price=e1.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 102:printf("Enter The no.of %s you want to add:",e2.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e2.id;
		       strcpy(ec[ei].item_name,e2.item_name);
		       ec[ei].price=e2.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 103:printf("Enter The no.of %s you want to add:",e3.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e3.id;
		       strcpy(ec[ei].item_name,e3.item_name);
		       ec[ei].price=e3.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 104:printf("Enter The no.of %s you want to add:",e4.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e4.id;
		       strcpy(ec[ei].item_name,e4.item_name);
		       ec[ei].price=e4.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 105:printf("Enter The no.of %s you want to add:",e5.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e5.id;
		       strcpy(ec[ei].item_name,e5.item_name);
		       ec[ei].price=e5.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;	
	 }
	 printf("Press e if you want add anymore products from electronics,then [n]for No:");
	 scanf(" %c",&ech);
}while(ech=='e');
}
void books()
{
	struct books_items b1={201,"Alchemist","Paulo Coelho",227,7};
    struct books_items b2={202,"Wings Of Fire","Abdul Kalam",400,9};
    struct books_items b3={203,"Ikigai   ","Hector Garciar",356,8};
    struct books_items b4={204,"You Can   ","George Adams",112,7};
    struct books_items b5={205,"Gone Girl","Gillian Flynn",189,9};
    printf("*****************************************************************************************");
	printf("\n%d\t%s\t\t%s\t\t\t%d\t\t%d\n",b1.id,b1.item_name,b1.author_name,b1.price,b1.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",b2.id,b2.item_name,b2.author_name,b2.price,b2.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",b3.id,b3.item_name,b3.author_name,b3.price,b3.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",b4.id,b4.item_name,b4.author_name,b4.price,b4.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",b5.id,b5.item_name,b5.author_name,b5.price,b5.rating);	
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&bid);
	switch(bid)
	{
		case 201:printf("Enter The no.of %s you want to add:",b1.item_name);
		       scanf("%d",&nb);
		       bc[ei].id=b1.id;
		       strcpy(bc[bi].item_name,b1.item_name);
		       bc[bi].price=b1.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 202:printf("Enter The no.of %s you want to add:",b2.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b2.id;
		       strcpy(bc[bi].item_name,b2.item_name);
		       bc[bi].price=b2.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 203:printf("Enter The no.of %s you want to add:",b3.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b3.id;
		       strcpy(bc[bi].item_name,b3.item_name);
		       bc[bi].price=b3.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 204:printf("Enter The no.of %s you want to add:",b4.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b4.id;
		       strcpy(bc[bi].item_name,b4.item_name);
		       bc[bi].price=b4.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 205:printf("Enter The no.of %s you want to add:",b5.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b5.id;
		       strcpy(bc[bi].item_name,b5.item_name);
		       bc[bi].price=b5.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;	
	 }
	 printf("Press b if you want add anymore products from books,then [n]for No:");
	 scanf(" %c",&bch);
}while(bch=='b');
}
void shoes()
{
   struct shoes_items s1={301,"Nike    ",5698,7};
   struct shoes_items s2={302,"Adidas  ",5999,8};
   struct shoes_items s3={303,"Puma    ",2999,9};
   struct shoes_items s4={304,"Reebok  ",3998,6};
   struct shoes_items s5={305,"SKECHERS",3985,9};	
   printf("***************************************************************");
   printf("\n%d\t%s\t%d\t\t%d\n",s1.id,s1.brand,s1.price,s1.rating);
   printf("%d\t%s\t%d\t\t%d\n",s2.id,s2.brand,s2.price,s2.rating);
   printf("%d\t%s\t%d\t\t%d\n",s3.id,s3.brand,s3.price,s3.rating);
   printf("%d\t%s\t%d\t\t%d\n",s4.id,s4.brand,s4.price,s4.rating);
   printf("%d\t%s\t%d\t\t%d\n",s5.id,s5.brand,s5.price,s5.rating);
   
   do{
   	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&sid);
	switch(sid)
	{
		case 301:printf("Enter The no.of %s shoes you want to add:",s1.brand);
		       scanf("%d",&ns);
		       sc[si].id=s1.id;
		       strcpy(sc[si].brand,s1.brand);
		       sc[si].price=s1.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 302:printf("Enter The no.of %s shoes you want to add:",s2.brand);
		       scanf("%d",&ns);
		       sc[si].id=s2.id;
		       strcpy(sc[si].brand,s2.brand);
		       sc[si].price=s2.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 303:printf("Enter The no.of %s shoes you want to add:",s3.brand);
		       scanf("%d",&ns);
		       sc[si].id=s3.id;
		       strcpy(sc[si].brand,s3.brand);
		       sc[si].price=s3.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 304:printf("Enter The no.of %s shoes you want to add:",s4.brand);
		       scanf("%d",&ns);
		       sc[si].id=s4.id;
		       strcpy(sc[si].brand,s4.brand);
		       sc[si].price=s4.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 305:printf("Enter The no.of %s shoes you want to add:",s5.brand);
		       scanf("%d",&ns);
		       sc[si].id=s5.id;
		       strcpy(sc[si].brand,s5.brand);
		       sc[si].price=s5.price;
		       sc[si].no_items=ns;
		       si++;
	           break;	
	 }
	 printf("Press s if you want add anymore products from shoes,then [n]for No:");
	 scanf(" %c",&sch);
}while(sch=='s');
}
void fashions()
{
	struct fashion_items f1={401,"kurtis","avaasa",500,9.5};
	struct fashion_items f2={402,"formal wear","linen club",999,8};
	struct fashion_items f3={403,"saree","Philips",1500,10};
	struct fashion_items f4={404,"lehanga","purvaja",1500,7};
	struct fashion_items f5={405,"frocks","generic",1000,9};
	printf("********************************************************************************");
	printf("\n%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",f1.id,f1.item_name,f1.cpny_name,f1.price,f1.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",f2.id,f2.item_name,f2.cpny_name,f2.price,f2.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",f3.id,f3.item_name,f3.cpny_name,f3.price,f3.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",f4.id,f4.item_name,f4.cpny_name,f4.price,f4.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",f5.id,f5.item_name,f5.cpny_name,f5.price,f5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&fid);
	switch(fid)
	{
		case 401:printf("Enter The no.of %s you want to add:",f1.item_name);
		       scanf("%d",&ne);
		       fc[fi].id=f1.id;
		       strcpy(fc[fi].item_name,f1.item_name);
		       fc[fi].price=f1.price;
		       fc[fi].no_items=ne;
		       fi++;
	           break;
	    case 402:printf("Enter The no.of %s you want to add:",f2.item_name);
		       scanf("%d",&ne);
		       fc[fi].id=f2.id;
		       strcpy(fc[fi].item_name,f2.item_name);
		       fc[fi].price=f2.price;
		       fc[fi].no_items=ne;
		       fi++;
	           break;
	    case 403:printf("Enter The no.of %s you want to add:",f3.item_name);
		       scanf("%d",&ne);
		       fc[fi].id=f3.id;
		       strcpy(fc[fi].item_name,f3.item_name);
		       fc[fi].price=f3.price;
		       fc[fi].no_items=ne;
		       fi++;
	           break;
	    case 404:printf("Enter The no.of %s you want to add:",f4.item_name);
		       scanf("%d",&ne);
		       fc[ei].id=f4.id;
		       strcpy(fc[fi].item_name,f4.item_name);
		       fc[fi].price=f4.price;
		       fc[fi].no_items=ne;
		       fi++;
	           break;
	    case 405:printf("Enter The no.of %s you want to add:",f5.item_name);
		       scanf("%d",&ne);
		       fc[fi].id=f5.id;
		       strcpy(fc[fi].item_name,f5.item_name);
		       fc[fi].price=f5.price;
		       fc[fi].no_items=ne;
		       fi++;
	           break;	
	 }
	 printf("Press f if you want add anymore products from electronics,then [n]for No:");
	 scanf(" %c",&fch);
}while(fch=='f');
}
void appliances()
{
	struct appliances_items a1={501,"Hair dryer","philips",1151,8};
	struct appliances_items a2={502,"Grinder","butterfly",2699,9};
	struct appliances_items a3={503,"Oven","Agaro",7999,10};
	struct appliances_items a4={504,"Speakers","boat",3999,7};
	struct appliances_items a5={505,"Airpods","Apple",2999,9};
	printf("*****************************************************************************\n");
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",a1.id,a1.item_name,a1.cpny_name,a1.price,a1.rating);
	printf("%d\t%s\t\t\t%s\t\t%d\t\t%d\n",a2.id,a2.item_name,a2.cpny_name,a2.price,a2.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",a3.id,a3.item_name,a3.cpny_name,a3.price,a3.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",a4.id,a4.item_name,a4.cpny_name,a4.price,a4.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",a5.id,a5.item_name,a5.cpny_name,a5.price,a5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&aid);
	switch(aid)
	{
		case 501:printf("Enter The no.of %s you want to add:",a1.item_name);
		       scanf("%d",&na);
		       ac[ai].id=a1.id;
		       strcpy(ac[ai].item_name,a1.item_name);
		       ac[ai].price=a1.price;
		       ac[ai].no_items=na;
		       ai++;
	           break;
	    case 502:printf("Enter The no.of %s you want to add:",a2.item_name);
		       scanf("%d",&ne);
		       ac[ai].id=a2.id;
		       strcpy(ac[ai].item_name,a2.item_name);
		       ac[ai].price=a2.price;
		       ac[ai].no_items=na;
		       ai++;
	           break;
	    case 503:printf("Enter The no.of %s you want to add:",a3.item_name);
		       scanf("%d",&na);
		       ac[ai].id=a3.id;
		       strcpy(ac[ai].item_name,a3.item_name);
		       ac[ai].price=a3.price;
		       ac[ai].no_items=na;
		       ai++;
	           break;
	    case 504:printf("Enter The no.of %s you want to add:",a4.item_name);
		       scanf("%d",&ne);
		       ac[ai].id=a4.id;
		       strcpy(ac[ai].item_name,a4.item_name);
		       ac[ai].price=a4.price;
		       ac[ai].no_items=na;
		       ei++;
	           break;
	    case 505:printf("Enter The no.of %s you want to add:",a5.item_name);
		       scanf("%d",&na);
		       ac[ai].id=a5.id;
		       strcpy(ac[ai].item_name,a5.item_name);
		       ac[ai].price=a5.price;
		       ac[ai].no_items=na;
		       ai++;
	           break;	
	 }
	 printf("Press e if you want add anymore products from appliances,then [n]for No:");
	 scanf(" %c",&ach);
}while(ach=='a');
}
void furnitures()
{
	struct furnitures_items u1={601,"5 Seater_sofaset","HARSHITHA FURNITURES",32894,9.5};
	struct furnitures_items u2={602,"6 Seater_dinningtable","SM woods",24999,8};
	struct furnitures_items u3={603,"coffee table","sheesham wood",12749,10};
	struct furnitures_items u4={604,"swing chair","cozy comfort",11799,7};
	struct furnitures_items u5={605,"dressing table","bharat furnitures",19699,9};
	printf("*****************************************************************************\n");
	printf("%d\t%s\t%s\t%d\t\t%d\n",u1.id,u1.item_name,u1.cpny_name,u1.price,u1.rating);
	printf("%d\t%s\t%s\t\t%d\t\t%d\n",u2.id,u2.item_name,u2.cpny_name,u2.price,u2.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",u3.id,u3.item_name,u3.cpny_name,u3.price,u3.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",u4.id,u4.item_name,u4.cpny_name,u4.price,u4.rating);
	printf("%d\t%s\t\t%s\t%d\t\t%d\n",u5.id,u5.item_name,u5.cpny_name,u5.price,u5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&uid);
	switch(uid)
	{
		case 601:printf("Enter The no.of %s you want to add:",u1.item_name);
		       scanf("%d",&nu);
		       uc[ui].id=u1.id;
		       strcpy(uc[ui].item_name,u1.item_name);
		       uc[ui].price=u1.price;
		       uc[ui].no_items=nu;
		       ui++;
	           break;
	    case 602:printf("Enter The no.of %s you want to add:",u2.item_name);
		       scanf("%d",&nu);
		       uc[ui].id=u2.id;
		       strcpy(uc[ui].item_name,u2.item_name);
		       uc[ui].price=u2.price;
		       uc[ui].no_items=nu;
		       ui++;
	           break;
	    case 603:printf("Enter The no.of %s you want to add:",u3.item_name);
		       scanf("%d",&nu);
		       uc[ui].id=u3.id;
		       strcpy(uc[ui].item_name,u3.item_name);
		       uc[ui].price=u3.price;
		       uc[ui].no_items=nu;
		       ui++;
	           break;
	    case 604:printf("Enter The no.of %s you want to add:",u4.item_name);
		       scanf("%d",&nu);
		       uc[ei].id=u4.id;
		       strcpy(uc[ui].item_name,u4.item_name);
		       uc[ui].price=u4.price;
		       uc[ui].no_items=nu;
		       ui++;
	           break;
	    case 605:printf("Enter The no.of %s you want to add:",u5.item_name);
		       scanf("%d",&nu);
		       uc[ui].id=u5.id;
		       strcpy(uc[ui].item_name,u5.item_name);
		       uc[ui].price=u5.price;
		       uc[ui].no_items=nu;
		       ui++;
	           break;	
	 }
	 printf("Press u if you want add anymore products from  furnitures,then [n]for No:");
	 scanf(" %c",&fch);
}while(uch=='u');
}
void grocceries()
{
	struct grocceries_items g1={701,"maggi mega pack","nestle",160,9.5};
	struct grocceries_items g2={702,"harpic","linen power plus",192,8};
	struct grocceries_items g3={703,"cookies of 10 packs","unibic",240,10};
	struct grocceries_items g4={704,"dairy milk chocolate","cadbury",160,7};
	struct grocceries_items g5={705,"soya bean oil","fortune",140,9};
	printf("***********************************************************************************\n");
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",g1.id,g1.item_name,g1.cpny_name,g1.price,g1.rating);
	printf("%d\t%s\t\t\t\t%s\t%d\t\t%d\n",g2.id,g2.item_name,g2.cpny_name,g2.price,g2.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",g3.id,g3.item_name,g3.cpny_name,g3.price,g3.rating);
	printf("%d\t%s\t\t%s\t\t\t%d\t\t%d\n",g4.id,g4.item_name,g4.cpny_name,g4.price,g4.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t%d\n",g5.id,g5.item_name,g5.cpny_name,g5.price,g5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&gid);
	switch(gid)
	{
		case 701:printf("Enter The no.of %s you want to add:",g1.item_name);
		       scanf("%d",&ng);
		       gc[gi].id=g1.id;
		       strcpy(gc[gi].item_name,g1.item_name);
		       gc[gi].price=g1.price;
		       gc[gi].no_items=ng;
		       gi++;
	           break;
	           
	    case 702:printf("Enter The no.of %s you want to add:",g2.item_name);
		       scanf("%d",&ne);
		       gc[gi].id=g2.id;
		       strcpy(gc[gi].item_name,g2.item_name);
		       gc[gi].price=g2.price;
		       gc[gi].no_items=ng;
		       gi++;
	           break;
	    case 703:printf("Enter The no.of %s you want to add:",g3.item_name);
		       scanf("%d",&ne);
		       gc[gi].id=g3.id;
		       strcpy(gc[gi].item_name,g3.item_name);
		       gc[gi].price=g3.price;
		       gc[gi].no_items=ng;
		       gi++;
	           break;
	           
	    case 704:printf("Enter The no.of %s you want to add:",g4.item_name);
		       scanf("%d",&ne);
		       gc[gi].id=g4.id;
		       strcpy(gc[gi].item_name,g4.item_name);
		       gc[gi].price=g4.price;
		       gc[gi].no_items=ng;
		       gi++;
	           break;
	           
	           
	           
	    case 705:printf("Enter The no.of %s you want to add:",g5.item_name);
		       scanf("%d",&ne);
		       gc[gi].id=g5.id;
		       strcpy(gc[gi].item_name,g5.item_name);
		       gc[gi].price=g5.price;
		       gc[gi].no_items=ng;
		       gi++;
	           break;	
	 }
	 printf("Press f if you want add anymore products from grocceries,then [n]for No:");
	 scanf(" %c",&gch);
}while(gch=='g');
}
void beauty()
{
	struct beauty_items y1={801,"super serum compact","lakme",400,9.5};
	struct beauty_items y2={802,"water proof eyeliner","swiss beauty",280,8};
	struct beauty_items y3={803,"red-lipstick","mama earth",150,10};
	struct beauty_items y4={804,"make up kit","maybelline",1000,8.5};
	struct beauty_items y5={805,"foundation","noor skin care",900,9};
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",y1.id,y1.item_name,y1.cpny_name,y1.price,y1.rating);
	printf("%d\t%s\t\t%s\t%d\t\t%d\n",y2.id,y2.item_name,y2.cpny_name,y2.price,y2.rating);
	printf("%d\t%s\t\t\t%s\t%d\t\t%d\n",y3.id,y3.item_name,y3.cpny_name,y3.price,y3.rating);
	printf("%d\t%s\t\t\t%s\t%d\t\t%d\n",y4.id,y4.item_name,y4.cpny_name,y4.price,y4.rating);
	printf("%d\t%s\t\t\t%s\t%d\t\t%d\n",y5.id,y5.item_name,y5.cpny_name,y5.price,y5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&fid);
	switch(fid)
	{
		case 801:printf("Enter The no.of %s you want to add:",y1.item_name);
		       scanf("%d",&ny);
		       yc[yi].id=y1.id;
		       strcpy(yc[yi].item_name,y1.item_name);
		       yc[yi].price=y1.price;
		       yc[yi].no_items=ny;
		       yi++;
	           break;
	    case 802:printf("Enter The no.of %s you want to add:",y2.item_name);
		       scanf("%d",&ny);
		       yc[yi].id=y2.id;
		       strcpy(yc[yi].item_name,y2.item_name);
		       yc[yi].price=y2.price;
		       yc[yi].no_items=ny;
		       yi++;
	           break;
	    case 803:printf("Enter The no.of %s you want to add:",y3.item_name);
		       scanf("%d",&ny);
		       yc[yi].id=y3.id;
		       strcpy(yc[yi].item_name,y3.item_name);
		       yc[yi].price=y3.price;
		       yc[yi].no_items=ny;
		       yi++;
	           break;
	    case 804:printf("Enter The no.of %s you want to add:",y4.item_name);
		       scanf("%d",&ny);
		       yc[yi].id=y4.id;
		       strcpy(yc[yi].item_name,y4.item_name);
		       yc[yi].price=y4.price;
		       yc[yi].no_items=ny;
		       yi++;
	           break;
	    case 805:printf("Enter The no.of %s you want to add:",y5.item_name);
		       scanf("%d",&ny);
		       yc[yi].id=y5.id;
		       strcpy(yc[yi].item_name,y5.item_name);
		       yc[yi].price=y5.price;
		       yc[yi].no_items=ny;
		       yi++;
	           break;	
	 }
	 printf("Press f if you want add anymore products from electronics,then [n]for No:");
	 scanf(" %c",&fch);
}while(fch=='f');
}
void pharmacy()
{
	struct pharmacy_items p1={901,"ovocare (pcod)tablet","dav",340,9.5};
	struct pharmacy_items p2={902,"digestion","linen club",249,8};
	struct pharmacy_items p3={903,"citrazin sheet","Philips",30,10};
	struct pharmacy_items p4={904,"paracetamol sheet","purvaja",50,7};
	struct pharmacy_items p5={905,"dot sheet","generic",100,9};
	printf("*****************************************************************************\n");
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",p1.id,p1.item_name,p1.cpny_name,p1.price,p1.rating);
	printf("%d\t%s\t\t\t%s\t%d\t\t%d\n",p2.id,p2.item_name,p2.cpny_name,p2.price,p2.rating);
	printf("%d\t%s\t\t\t%s\t\t%d\t\t%d\n",p3.id,p3.item_name,p3.cpny_name,p3.price,p3.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",p4.id,p4.item_name,p4.cpny_name,p4.price,p4.rating);
	printf("%d\t%s\t\t\t%s\t\t%d\t\t%d\n",p5.id,p5.item_name,p5.cpny_name,p5.price,p5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&pid);
	switch(pid)
	{
		case 901:printf("Enter The no.of %s you want to add:",p1.item_name);
		       scanf("%d",&np);
		       pc[pi].id=p1.id;
		       strcpy(pc[pi].item_name,p1.item_name);
		       pc[pi].price=p1.price;
		       pc[pi].no_items=np;
		       pi++;
	           break;
	    case 902:printf("Enter The no.of %s you want to add:",p2.item_name);
		       scanf("%d",&np);
		       pc[pi].id=p2.id;
		       strcpy(pc[pi].item_name,p2.item_name);
		       pc[pi].price=p2.price;
		       pc[pi].no_items=np;
		       pi++;
	           break;
	    case 903:printf("Enter The no.of %s you want to add:",p3.item_name);
		       scanf("%d",&np);
		       pc[pi].id=p3.id;
		       strcpy(pc[pi].item_name,p3.item_name);
		       pc[pi].price=p3.price;
		       pc[pi].no_items=np;
		       pi++;
	           break;
	    case 904:printf("Enter The no.of %s you want to add:",p4.item_name);
		       scanf("%d",&np);
		       pc[pi].id=p4.id;
		       strcpy(pc[pi].item_name,p4.item_name);
		       pc[pi].price=p4.price;
		       pc[pi].no_items=np;
		       pi++;
	           break;
	    case 905:printf("Enter The no.of %s you want to add:",p5.item_name);
		       scanf("%d",&np);
		       pc[pi].id=p5.id;
		       strcpy(pc[pi].item_name,p5.item_name);
		       pc[pi].price=p5.price;
		       pc[pi].no_items=np;
		       pi++;
	           break;	
	 }
	 printf("Press f if you want add anymore products from electronics,then [n]for No:");
	 scanf(" %c",&fch);
}while(fch=='f');
}
void sports()
{
	struct sports_items t1={1001,"Tummy trimmer","oddish",599,9.5};
	struct sports_items t2={1002,"gym bag combo","5 o'clock",815,8};
	struct sports_items t3={1003,"running shoe","adidas",1500,10};
	struct sports_items t4={1004,"cricket bat","jaspo slog ",500,8};
	struct sports_items t5={1005,"badminton set","hipkoo sports",600,9};
	printf("**********************************************************************************\n");
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",t1.id,t1.item_name,t1.cpny_name,t1.price,t1.rating);
	printf("%d\t%s\t\t%s\t%d\t\t%d\n",t2.id,t2.item_name,t2.cpny_name,t2.price,t2.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",t3.id,t3.item_name,t3.cpny_name,t3.price,t3.rating);
	printf("%d\t%s\t\t%s\t%d\t\t%d\n",t4.id,t4.item_name,t4.cpny_name,t4.price,t4.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&tid);
	switch(tid)
	{
		case 1001:printf("Enter The no.of %s you want to add:",t1.item_name);
		       scanf("%d",&ne);
		       tc[ti].id=t1.id;
		       strcpy(tc[fi].item_name,t1.item_name);
		       tc[ti].price=t1.price;
		       tc[ti].no_items=nt;
		       ti++;
	           break;
	    case 1002:printf("Enter The no.of %s you want to add:",t2.item_name);
		       scanf("%d",&ne);
		       tc[ti].id=t2.id;
		       strcpy(tc[fi].item_name,t2.item_name);
		       tc[ti].price=t2.price;
		       tc[ti].no_items=nt;
		       ti++;
	           break;
	    case 1003:printf("Enter The no.of %s you want to add:",t3.item_name);
		       scanf("%d",&ne);
		       tc[ti].id=t3.id;
		       strcpy(tc[fi].item_name,t3.item_name);
		       tc[ti].price=t3.price;
		       tc[ti].no_items=nt;
		       ti++;
	           break;
	    case 1004:printf("Enter The no.of %s you want to add:",t4.item_name);
		       scanf("%d",&ne);
		       tc[ti].id=t4.id;
		       strcpy(tc[fi].item_name,t4.item_name);
		       tc[ti].price=t4.price;
		       tc[ti].no_items=nt;
		       ti++;
	           break;
	    case 1005:printf("Enter The no.of %s you want to add:",t5.item_name);
		       scanf("%d",&ne);
		       tc[ti].id=t5.id;
		       strcpy(tc[fi].item_name,t5.item_name);
		       tc[ti].price=t5.price;
		       tc[ti].no_items=nt;
		       ti++;
	           break;	
	 }
	 printf("Press t if you want add anymore products from sports,then [n]for No:");
	 scanf(" %c",&tch);
}while(tch=='t');
}
displaye(struct elctronics_cart ec[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",ec[i].id,ec[i].item_name,ec[i].price,ec[i].no_items);
}
displayb(struct books_cart bc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t%d\t%d\n",bc[i].id,bc[i].item_name,bc[i].price,bc[i].no_items);
}
displays(struct shoes_cart sc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t%d\t%d\n",sc[i].id,sc[i].brand,sc[i].price,sc[i].no_items);
}
displayf(struct fashion_cart fc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",fc[i].id,fc[i].item_name,fc[i].price,fc[i].no_items);
}
displaya(struct appliances_cart ac[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",ac[i].id,ac[i].item_name,ac[i].price,ac[i].no_items);
}
displayu(struct furnitures_cart uc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",uc[i].id,uc[i].item_name,uc[i].price,uc[i].no_items);
}
displayg(struct grocceries_cart gc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",gc[i].id,gc[i].item_name,gc[i].price,gc[i].no_items);
}
displayy(struct beauty_cart yc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",yc[i].id,yc[i].item_name,yc[i].price,yc[i].no_items);
}
displayp(struct pharmacy_cart pc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",pc[i].id,pc[i].item_name,pc[i].price,pc[i].no_items);
}
displayt(struct sports_cart tc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",tc[i].id,tc[i].item_name,tc[i].price,tc[i].no_items);
}

void change()
{
	do
	{
	printf("Enter the Id of the product you wish to change the quantity:");
	scanf("%d",&changeid);
	for(i=0;i<ei;i++)
	{
		if(changeid==ec[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&ec[i].no_items);
		break;
       	}
	}
	pos=0;
	for(i=0;i<bi;i++)
	{
	if(changeid==bc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&bc[i].no_items);
		break;
       	}
  }
	pos=0;
	for(i=0;i<si;i++)
	{
	if(changeid==sc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&sc[i].no_items);
		break;
       	}
	}
	pos=0;
	for(i=0;i<fi;i++)
	{
	if(changeid==fc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&fc[i].no_items);
		break;
       	}
	}
	pos=0;
	for(i=0;i<fi;i++)
	{
	if(changeid==ac[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&ac[i].no_items);
		break;
       	}
	}
	for(i=0;i<ui;i++)
	{
	if(changeid==uc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&uc[i].no_items);
		break;
       	}
  }
  for(i=0;i<gi;i++)
	{
	if(changeid==gc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&gc[i].no_items);
		break;
       	}
  }
	for(i=0;i<yi;i++)
	{
	if(changeid==yc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&yc[i].no_items);
		break;
       	}
  }
  for(i=0;i<pi;i++)
	{
	if(changeid==pc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&pc[i].no_items);
		break;
       	}
  }
  for(i=0;i<ti;i++)
	{
	if(changeid==tc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&tc[i].no_items);
		break;
       	}
  }
	
	
	printf("------------------------------Product Quantity changed Succesfully---------------------------------------\n\n");
	printf("Enter c to change the quantity of more items:");
	scanf(" %c",&ch);
}while(ch=='c');
}
void delete_electronics(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(ec[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			ec[j]=ec[j+1];
			ei--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_books(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(bc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			bc[j]=bc[j+1];
			bi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_shoes(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(sc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			sc[j]=sc[j+1];
			si--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_fashions(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(fc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			fc[j]=fc[j+1];
			fi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_appliances(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(ac[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			ac[j]=ac[j+1];
			ai--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_furnitures(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(uc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			uc[j]=uc[j+1];
			ui--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_grocceries(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(gc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			gc[j]=gc[j+1];
			gi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_beauty(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(yc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			yc[j]=yc[j+1];
			yi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_pharmacy(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(pc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			pc[j]=pc[j+1];
			pi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_sports(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(tc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			tc[j]=tc[j+1];
			ti--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void bill()
{
    printf("Please Enter your Name:");
    scanf("%s",name);
    printf("Enter Phone Number:");
    scanf("%lld",&phone_no);
    printf("\t\tENTER ADDRESS==>");
    printf("\nHouse Number:");
    scanf("%d",&house_no);
    printf("Street:");
    scanf("%s",adress_street);
    printf("Town/City:");
    scanf("%s",adress_city);
    printf("District:");
    scanf("%s",adress_district);
    printf("State:");
    scanf("%s",adress_state);
    if(ec[0].id!=0)
    {
    printf("\n-------------------------------------Electronic Items------------------------------------\n");
    for(i=0;i<ei;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",ec[i].id,ec[i].item_name,ec[i].price,ec[i].no_items);
		totale+=ec[i].price*ec[i].no_items;
	}
}
	if(totale!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Electronics Bill=%d\n",totale);
	printf("---------------------------------------------------------------\n");
    }
	if(bc[0].id!=0)
    {
   	printf("---------------------------------Books----------------------------------------------------\n");
	for(i=0;i<bi;i++)
	{
		printf("ID:%d\nBook_Name:%s\nPrice:%d\nNo_Items:%d\n",bc[i].id,bc[i].item_name,bc[i].price,bc[i].no_items);
		totalb+=bc[i].price*bc[i].no_items;
	}
}
	if(totalb!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Books Bill=%d\n",totalb);
	printf("---------------------------------------------------------------\n");
    }
	if(sc[0].id!=0)
    {
    printf("----------------------------------------Shoes----------------------------------------------\n");
	for(i=0;i<si;i++)
	{
		printf("ID:%d\nBrand_Name:%s\nPrice:%d\nNo_Items:%d\n",sc[i].id,sc[i].brand,sc[i].price,sc[i].no_items);
		totals+=sc[i].price*sc[i].no_items;
	}
}
    if(fc[0].id!=0)
    {
    printf("\n-------------------------------------fashion Items------------------------------------\n");
    for(i=0;i<fi;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",fc[i].id,fc[i].item_name,fc[i].price,fc[i].no_items);
		totalf+=fc[i].price*fc[i].no_items;
	}
}
if(totalf!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total fashion Bill=%d\n",totalf);
	printf("---------------------------------------------------------------\n");
    }
	
	if(uc[0].id!=0)
    {
    printf("\n------------------------------------furnitures Items------------------------------------\n");
    for(i=0;i<ui;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",uc[i].id,uc[i].item_name,uc[i].price,uc[i].no_items);
		totalu+=uc[i].price*uc[i].no_items;
	}
}
	if(totalu!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total furnitures Bill=%d\n",totalu);
	printf("---------------------------------------------------------------\n");
    }
    if(gc[0].id!=0)
    {
    printf("\n-------------------------------------grocceries Items------------------------------------\n");
    for(i=0;i<gi;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",gc[i].id,gc[i].item_name,gc[i].price,gc[i].no_items);
		totale+=gc[i].price*gc[i].no_items;
	}
}
	if(totalg!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Electronics Bill=%d\n",totalg);
	printf("---------------------------------------------------------------\n");
    }
	if(yc[0].id!=0)
    {
    printf("\n-------------------------------------beauty Items------------------------------------\n");
    for(i=0;i<yi;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",yc[i].id,yc[i].item_name,yc[i].price,yc[i].no_items);
		totaly+=yc[i].price*yc[i].no_items;
	}
}
	if(totaly!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total beauty Bill=%d\n",totaly);
	printf("---------------------------------------------------------------\n");
    }
	if(pc[0].id!=0)
    {
    printf("\n-------------------------------------pharmacy Items------------------------------------\n");
    for(i=0;i<pi;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",pc[i].id,pc[i].item_name,pc[i].price,pc[i].no_items);
		totalp+=pc[i].price*pc[i].no_items;
	}
}
	if(totalp!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total pharmacy Bill=%d\n",totalp);
	printf("---------------------------------------------------------------\n");
    }
	if(tc[0].id!=0)
    {
    printf("\n-------------------------------------sports Items------------------------------------\n");
    for(i=0;i<ti;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",tc[i].id,tc[i].item_name,tc[i].price,tc[i].no_items);
		totalt+=ec[i].price*tc[i].no_items;
	}
}
	if(totalt!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total sports Bill=%d\n",totalt);
	printf("---------------------------------------------------------------\n");
	if(totalf!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Electronics Bill=%d\n",totalf);
	printf("---------------------------------------------------------------\n");
    }

	if(totals!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Shoes Bill=%d\n",totals);
	printf("---------------------------------------------------------------\n");
    }
    if(totalf!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total fashion Bill=%d\n",totalf);
	printf("---------------------------------------------------------------\n");
    }
    if(totalu!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total furnitures Bill=%d\n",totalu);
	printf("---------------------------------------------------------------\n");
    }
    if(totalg!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total grocceries Bill=%d\n",totalg);
	printf("---------------------------------------------------------------\n");
    }
    if(totaly!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total beauty Bill=%d\n",totaly);
	printf("---------------------------------------------------------------\n");
    }
    if(totalp!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total pharmacy Bill=%d\n",totalp);
	printf("---------------------------------------------------------------\n");
    }
    if(totalt!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total sports Bill=%d\n",totalt);
	printf("---------------------------------------------------------------\n");
    }
	total=totale+totalb+totals+totalf+totala+totalu+totalg+totaly+totalp+totalt;
	printf("---------------------------------------------------------------\n");
	printf("TOTAL BILL=%d\n",total);
}
    printf("----------------------------------------------------------------\n");
	printf("\t\t\t (:<===***Thank You For Buying %s***===>:)",name);
}

	

	
	

