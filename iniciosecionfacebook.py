import tkinter as tk
from tkinter import messagebox

def iniciar_sesion():
    usuario = entrada_usuario.get()
    contraseña = entrada_contraseña.get()
    # Aquí puedes agregar la lógica para verificar las credenciales del usuario
    messagebox.showinfo("Inicio de sesión", f"Bienvenido, {usuario}!")

ventana = tk.Tk()
ventana.title("Facebook")

tk.Label(ventana, text="Correo electrónico o número de teléfono").pack()
entrada_usuario = tk.Entry(ventana)
entrada_usuario.pack()

tk.Label(ventana, text="Contraseña").pack()
entrada_contraseña = tk.Entry(ventana, show="*")
entrada_contraseña.pack()

tk.Button(ventana, text="Iniciar sesión", command=iniciar_sesion).pack()

ventana.mainloop()