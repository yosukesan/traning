from yattag import Doc

doc, tag, text = Doc().tagtext()

with tag('h1'):
    text('Hello World')

print (doc.getvalue())
