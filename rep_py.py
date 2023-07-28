import os
import sys
import replicate
import webbrowser
import requests


# Set the Replicate API token
os.environ['REPLICATE_API_TOKEN'] = 'r8_R7GTcLhbVw6Pvao4uFFRhT7efSiC7j34GbtxF'

def run_gfpgan(input_image_path):
    # Run the TencentARC/GFPGAN model
    with open(input_image_path, "rb") as img_file:
        output = replicate.run(
            "tencentarc/gfpgan:9283608cc6b7be6b65a8e44983db012355fde4132009bf99d976b2f0896856a3",
            input={"img": img_file}
        )

    # Print the output
    #print(output)
    webbrowser.open(output)

    # Get the processed image URL from the output
    processed_image_url = output

    # Download and save the processed image
    response = requests.get(processed_image_url)
    if response.status_code == 200:
        output_image_path = os.path.join(os.path.dirname(__file__), "new_image.jpg")
        with open(output_image_path, "wb") as output_img_file:
            output_img_file.write(response.content)
        print("Processed image saved at:", output_image_path)
    else:
        print("Failed to download the processed image.")

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python script_name.py <input_image_path>")
    else:
        input_image_path = sys.argv[1]
        run_gfpgan(input_image_path)
