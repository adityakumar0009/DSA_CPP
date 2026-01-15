from tkinter import*
from tkinter import messagebox
root = Tk()
root.title("My First Gui")
root.geometry("580x600+100+50")
root.wm_iconbitmap("adi img.ico")

def message():
    messagebox.showinfo('Success','successfully submitted')

def message1():
    messagebox.showerror('Error','Please enter a valid number')
    
def message2():
    messagebox.showwarning('Warning','This is a warning')        

btn = Button(root,text="Button 1",font='arial',bg='black',fg='gold',command=message)
btn.place(x=100,y=50)

btn = Button(root,text="Button 2",font='arial',bg='black',fg='gold',command=message1)
btn.place(x=200,y=50)

btn = Button(root,text="Button 3",font='arial',bg='black',fg='gold',command=message2)
btn.place(x=300,y=50)


root.mainloop()