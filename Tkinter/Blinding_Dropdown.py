from tkinter import*
from tkinter import ttk
root = Tk() #window
root.title("My first GuI")
root.geometry("500x500+0+0")#set size of window
root.wm_iconbitmap("adi img.ico") #To change the icon logo
# root.resizable(False,False)

def show_data():
    print(mycombo.get())
    

mycombo = ttk.Combobox(root,font=('arial'),justify='center',width=30,state='readonly')
mycombo['value'] = ('Select Option','Python','Javascript','Java','Html')
mycombo.set('Select Option')
mycombo.place(x=100,y=30)

# Button
btn = Button(root,text='Show Data',command=show_data,width=20,font=('arial',15,'bold'),fg='white',bg='red')
btn.place(x=100,y=120)

root.mainloop() #To stay window