from tkinter import*
root = Tk()
root.title('My First Gui')
root.geometry("580x600+100+50")
root.wm_iconbitmap('adi img.ico')

myframe = Frame(root,bd=3,relief=RIDGE)
myframe.place(x=200,y=50,height=250,width=200)


scroll_x = Scrollbar(myframe,orient=HORIZONTAL)
scroll_y = Scrollbar(myframe,orient=VERTICAL)

scroll_x.pack(side=BOTTOM,fill=X)
scroll_y.pack(side=RIGHT,fill=Y)

mylist = Listbox(myframe,font=('arial',15,'bold'),xscrollcommand=scroll_x.set,yscrollcommand=scroll_y.set)
mylist.pack()

scroll_x.config(command=mylist.xview)
scroll_y.config(command=mylist.yview)

for i in range(0,21):
    mylist.insert(END,f'Python Version : {i}')

root.mainloop()