object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Conversion Binaria 0-64'
  ClientHeight = 289
  ClientWidth = 529
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 21
    Width = 151
    Height = 13
    Caption = 'ingresa un numero entre 0 y 64'
  end
  object Label2: TLabel
    Left = 32
    Top = 120
    Width = 54
    Height = 13
    Caption = 'Conversi'#243'n'
  end
  object Edit1: TEdit
    Left = 24
    Top = 53
    Width = 137
    Height = 21
    NumbersOnly = True
    TabOrder = 0
    Text = 'Ingresa el N'#250'mero !!(key)'
  end
  object Button1: TButton
    Left = 32
    Top = 80
    Width = 75
    Height = 25
    Caption = 'Generar'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 194
    Top = 18
    Width = 311
    Height = 233
    Lines.Strings = (
      '#####################################'
      '#   EJERCICIOS EN C.- by Secury.'#9'#'
      '#   Capa 1'#9#9#9#9#9#9
      #9'#'
      '#####################################'
      ''
      ''
      ''
      '2.) Programa que solicita un n'#250'mero decimal y lo '
      'pasa/muestra en binario. N'#250'mero que se introduce'
      'entre 0-64.'
      ''
      ''
      ''
      '#####################################'
      '#####################################'
      '###########################')
    ReadOnly = True
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 24
    Top = 139
    Width = 137
    Height = 30
    ReadOnly = True
    TabOrder = 3
  end
end
