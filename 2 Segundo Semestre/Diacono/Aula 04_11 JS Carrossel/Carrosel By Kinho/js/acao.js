var moldura = document.getElementById("moldura")
var botaoVoltar = document.getElementById("btnVoltar")
var botaoAvancar = document.getElementById("btnAvancar")
var fotos = ["img1.jpg", "img2.jpg","img3.jpg","img4.jpg"]
var indicie = 0
var temporizador
var tempoEspera = 1000

window.onload = inicio

function inicio(){
    botaoAvancar.onclick = Avancar
    botaoVoltar.onclick = Voltar
    MostrarFoto()
    PararReiniciar()
}


function Voltar(){
    if(indicie > 0){
        indicie--
    }else{
        indicie = fotos.length - 1
    }
    MostrarFoto()
    PararReiniciar()
}

function Avancar(){
    if(indicie < fotos.length - 1){
        indicie++
    }else{
        indicie = 0
    }
    MostrarFoto()
    PararReiniciar()

}

function MostrarFoto(){
    moldura.src = "imagem/"+fotos[indicie]
}

function automatizarFoto(){

    temporizador = setInterval(Avancar, tempoEspera)

}

function PararReiniciar(){
    clearInterval(temporizador)
    automatizarFoto()
}

console.log(moldura)
