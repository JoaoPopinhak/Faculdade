var h3 = document.querySelector("h3")
var button = document.querySelector("button")
var listaLi = document.querySelectorAll("li")
const alertaClass = "alerta"
const textoAtivarBotao = "Ativar CSS"
const desativarBotao = "Desativar CSS"
var estadoAtivoCss = false


button.onclick = ativarCss

function ativarCss(){
    if(!estadoAtivoCss){
        Ativo()        
    }else{
        Desativo()
    }

    estadoAtivoCss = !estadoAtivoCss


    function Ativo(){

        h3.className = alertaClass
        button.textContent = desativarBotao
        acessaLi(alertaClass)

    }

    function Desativo(){

        h3.className = ""
        button.textContent = textoAtivarBotao
        acessaLi("")

    }


    function acessaLi(valor){

        for(let i = 0; i < listaLi.length; i++){
            listaLi[i].className = valor
        }
        
    }


}
