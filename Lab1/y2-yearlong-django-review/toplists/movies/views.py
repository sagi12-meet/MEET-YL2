# always remember to import your models so you can use them
from models import Movie, Comment

from django.http import HttpResponse, HttpResponseRedirect
from django.shortcuts import render

def movie_list(request):
    list_of_all_movies = Movie.objects.all()
    context = {'movies_list': list_of_all_movies}
    # when you render, always pass a context as a dictionary
    # the way it is written here, movies_list.html can now
    # use a variable called "movies_list"
    return render(request, 'movies/movies_list.html', context)

# an example of how to process form submission
def add_movie(request):
    newmovie = Movie(title=request.POST['movie_title'])
    # when making new objects, always remember to save them
    newmovie.save()
    return HttpResponseRedirect('/movies')

def movie(request, movie_id):
    movie_object = Movie.objects.filter(id=movie_id)
    context = {'movie': movie_object[0]}
    return render(request, 'movies/movie.html', context)

def add_comment(request, movie_id):
	newcom=Comment(text=request.POST['comment_text'],movie=Movie.objects.filter(id=movie_id))
	newcom.save()
    	return HttpResponse("adding comment to movie " + movie_id)
