from tkinter import*
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)

def show_data():
    cursor = listbox1.curselection()
    # print(cursor)
    # print(listbox1.get())
    
    for item in cursor:
        print(listbox1.get(item))

course = ['python','java','javascript','Tkinter']
listbox1 = Listbox(root,font=('arial',15,'bold'),selectmode='extended')
listbox1.place(x=100,y=50)

#Button
btn = Button(root,command=show_data,text='show data',width=20,font=('alias',15,'bold'),bg='blue')
btn.place(x=100,y=330)

for i in course:
    listbox1.insert(END,i)

root.mainloop() #To stay window