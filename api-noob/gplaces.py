api_file = "/home/naveen/Dropbox/books_and_code/old_code/schlussel/one.txt"

file_object = open(api_file,'r');

key = file_object.readline();

search_url = "https://maps.googleapis.com/maps/api/place/nearbysearch/output?parameters"

print(key);

