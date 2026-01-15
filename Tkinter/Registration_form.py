from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("580x670+100+50")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo


#function declaration
def show_data():
    if check_var.get()=="ONN":
        get_data = f'Name : {name_var.get()}\nEmail : {email_var.get()}\nGender : {gender_var.get()}\n'
        my_data.config(text=get_data,font=('arial',30,'bold'))
    else:
        my_data.config(text="Please accept or terms and conditions")    


title_name = Label(root,text="STUDENT ENTRY FORM",font=('arial',35,'bold'),bg='white',fg='blue')
title_name.pack(side=TOP)

main_frame = Frame(root,bd=3,relief=RIDGE)
main_frame.place(x=20,y=70,width=550,height=580)


# Labels
name = Label(main_frame,text="Student Name",font=('arial',20,'bold'))
name.grid(row=0,column=0,padx=10,pady=10,sticky=W)

Email = Label(main_frame,text="Student Email",font=('arial',20,'bold'))
Email.grid(row=1,column=0,padx=10,pady=10,sticky=W)

Gender = Label(main_frame,text="Select Gender",font=('arial',20,'bold'))
Gender.grid(row=2,column=0,padx=10,pady=10,sticky=W)


# variables
name_var = StringVar()
email_var = StringVar()
gender_var = StringVar()
check_var = StringVar()


# Entry
name_entry = Entry(main_frame,font=('arial',20,'bold'),textvariable=name_var,width=15,highlightthickness=2)
name_entry.grid(row=0,column=1,padx=10,pady=10,sticky=W)

email_entry = Entry(main_frame,font=('arial',20,'bold'),textvariable=email_var,width=15,highlightthickness=2)
email_entry.grid(row=1,column=1,padx=10,pady=10,sticky=W)


# RadioButton
male = Radiobutton(main_frame,text='male',value='male',variable=gender_var,font=('arial',20,'bold'))
male.grid(row=2,column=1,pady=2,sticky=W)
# gender_var = StringVar()
gender_var.set("male")

female = Radiobutton(main_frame,text='female',value='female',variable=gender_var,font=('arial',20,'bold'))
female.grid(row=3,column=1,pady=2,sticky=W)

#checkButton
check_btn = Checkbutton(main_frame,text="Agree Our Terms & Conditions",variable=check_var,onvalue='ONN',offvalue='OFF',font=('arial',15,'bold'))
check_btn.grid(row=4,column=1,sticky=W)
check_var.set("OFF")

#button
btn = Button(main_frame,text="Save Data",width=20,command=show_data,font=('arial',15,'bold'),bg='blue',fg='white')
btn.grid(row=5,column=1,sticky=W)

my_data = Label(main_frame,text="",font=('arial',20,'bold'))
my_data.grid(row=6,column=0,columnspan=2,padx=10,pady=10,sticky=W)

root.mainloop() #To stay window
